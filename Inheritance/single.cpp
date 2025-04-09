#include <iostream>
using namespace std;

// Single Inheritance : One base class and one derived class.

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
    // Inherits speak() from Animal
};

int main() {
    Dog d;
    d.speak();  // Output: Animal speaks
    return 0;
}
