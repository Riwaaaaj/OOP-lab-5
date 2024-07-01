// 2.	Write a program having student as an abstract class and create derived class such as Engineering, Science and Medical. Create their objects process them and access them using array of base class pointers.
#include <iostream>
#include <string>

// Abstract base class
class Student {
public:
    virtual void displayInfo() const = 0; // Pure virtual function
    virtual ~Student() {} // Virtual destructor
};

// Derived class for Engineering students
class Engineering : public Student {
private:
    std::string name;
    int year;
public:
    Engineering(const std::string& name, int year) : name(name), year(year) {}

    void displayInfo() const  {
        std::cout << "Engineering Student: " << name << ", Year: " << year << std::endl;
    }
};

// Derived class for Science students
class Science : public Student {
private:
    std::string name;
    int year;
public:
    Science(const std::string& name, int year) : name(name), year(year) {}

    void displayInfo() const  {
        std::cout << "Science Student: " << name << ", Year: " << year << std::endl;
    }
};

// Derived class for Medical students s
class Medical : public Student {
private:
    std::string name;
    int year;
public:
    Medical(const std::string& name, int year) : name(name), year(year) {}

    void displayInfo() const  {
        std::cout << "Medical Student: " << name << ", Year: " << year << std::endl;
    }
};

int main() {
    // Create objects of derived classes
    Engineering engStudent("Alice", 2);
    Science sciStudent("Bob", 3);
    Medical medStudent("Charlie", 1);

    // Array of base class pointers
    Student* students[3];
    students[0] = &engStudent;
    students[1] = &sciStudent;
    students[2] = &medStudent;

    // Process and access objects through base class pointers
    for (int i = 0; i < 3; ++i) {
        students[i]->displayInfo();
    }

    return 0;
}
