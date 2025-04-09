#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function - enables runtime polymorphism
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding speak() from base class
    void speak() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;     // Base object
    Dog d;        // Derived object

    a.speak();    // Animal makes a sound
    d.speak();    // Dog barks

    Animal *a1;
    Dog d1;

    a1 = &d1;     //assigning the address of a derived class object (Dog) to a base class pointer.

    a1->speak();    //Runtime Polymorphism - it will print - "Dog barks"

    return 0;
}
