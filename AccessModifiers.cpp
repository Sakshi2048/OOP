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

/*

Public Inheritance : 
- public remains public
- protected remains protected
- private is not inherited

*/ 
class DerivedPublic : public Base {
public:
    void display() {
        cout << "Public: " << a << endl;      // Allowed
        cout << "Protected: " << b << endl;   // Allowed
        // cout << c;                         // Not allowed (private in Base)
    }
};

/*

Protected Inheritance : 
- public becomes protected
- protected remains protected
- private is not inherited

*/ 
class DerivedProtected : protected Base {
public:
    void display() {
        cout << "Public becomes Protected: " << a << endl;     // Allowed
        cout << "Protected remains Protected: " << b << endl;  // Allowed
    }
};

/*

Private Inheritance : 
- public becomes private
- protected becomes private
- private is not inherited

*/ 
class DerivedPrivate : private Base {
public:
    void display() {
        cout << "Public becomes Private: " << a << endl;       // Allowed
        cout << "Protected becomes Private: " << b << endl;    // Allowed
    }
};

int main() {
    DerivedPublic obj1;
    cout << obj1.a << endl;   //  Accessible (remains public)

    DerivedProtected obj2;
    // obj2.a;                // Error: a is protected in DerivedProtected

    DerivedPrivate obj3;
    // obj3.a;                // Error: a is private in DerivedPrivate

    
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
