#include <iostream>
using namespace std;

class Base {
public:
    int a = 1; // Public member
protected:
    int b = 2; // Protected member
private:
    int c = 3; // Private member (not inherited)
};


class Child1 : public Base {
    // a - public
    // b - protected
    // c - inaccessible
};


class Child2 : protected Base {
    // a - protected
    // b - protected
    // c - inaccessible
};


class Child3 : private Base {
    // a - private
    // b - private
    // c - inaccessible
};

int main() {
    Child1 obj1;
    cout << obj1.a << endl;   //  Accessible (remains public)

    Child2 obj2;
    // cout << obj2.a << endl;                // Error: a is protected in Child2

    Child3 obj3;
    // cout << obj3.a << endl;              // Error: a is private in Child3


    return 0;
}
