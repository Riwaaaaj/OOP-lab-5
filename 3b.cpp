// 3.	WAP to show the invocation order of the constructor in the following inheritance.
// •	Multilevel inheritance
// •	Hybrid inheritance

// A program for Hybrid inheritance.
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
};

class C : public A {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructor of D" << endl;
    }
};

int main() {
    D objD;
    return 0;
}
