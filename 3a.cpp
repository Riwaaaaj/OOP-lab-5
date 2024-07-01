// 3.	WAP to show the invocation order of the constructor in the following inheritance.
// •	Multilevel inheritance
// •	Hybrid inheritance

// A program for multi level inheritance.

#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << std::endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B" << std::endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Constructor of C" << std::endl;
    }
};

int main() {
    C objC;
    return 0;
}
