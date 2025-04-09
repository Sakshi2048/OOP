#include <iostream>
using namespace std;

// multilevel : One class is derived from another derived class.

class LivingBeing {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Animal : public LivingBeing {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.breathe(); // From LivingBeing
    d.eat();     // From Animal
    d.bark();    // Own function
    return 0;
}
