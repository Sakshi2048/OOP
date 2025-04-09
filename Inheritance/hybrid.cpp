#include <iostream>
using namespace std;


// hybrid -  A combination of two or more types of inheritance.

// Example : Multiple + Multilevel

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
    // Inherits from both B (which inherits A) and C
};

int main() {
    D obj;
    obj.showA();  // From A through B
    obj.showB();  // From B
    obj.showC();  // From C
    return 0;
}
