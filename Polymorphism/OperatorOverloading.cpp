#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Constructor
    Point(int a=0 , int b=0) {
        x = a;
        y = b;
    }

    // Display function
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Overloading + operator
    Point operator+(Point p) {
        // x = x of object calling the function , p.x = x of object passed
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    Point operator-(Point p)
    {
        Point temp;
        temp.x = x - p.x;
        temp.y = y - p.y;
        return temp;
    }

    
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    Point p3 = p1 + p2;  // Calls overloaded + operator 
    // p1+p2 == p1.operator+(p2)

    cout << "Point 1: ";
    p1.display();

    cout << "Point 2: ";
    p2.display();

    cout << "Sum: ";
    p3.display();

    return 0;
}
