#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class
class Circle : public Shape {
    int radius;

public:
    Circle(int r) {
        radius = r;
    }

    // Overriding pure virtual function
    void area(){
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {

    // Shape s;  Not allowed - abstract class

    Circle c(5);  //  Allowed - Circle is concrete class
    c.area();


    return 0;
}
