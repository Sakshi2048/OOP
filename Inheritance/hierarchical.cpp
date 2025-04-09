#include <iostream>
using namespace std;

// Hierarchical Inheritance :  Multiple classes inherit from a single base class.

class Person {
public:
    void speak() {
        cout << "Speaking..." << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "Studying..." << endl;
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "Teaching..." << endl;
    }
};

int main() {
    Student s;
    Teacher t;
    s.speak(); s.study();
    t.speak(); t.teach();
    return 0;
}
