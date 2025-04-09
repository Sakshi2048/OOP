#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 0;
    }

    // Friend function declaration
    friend void setLength(Box& b, int l);
};

// Friend function definition 
void setLength(Box& b, int l) {
    b.length = l;  // Accessing private member
    cout << "Length is set to: " << b.length << endl;
}

int main() {
    Box b1;
    setLength(b1, 10);  // Using friend function to modify private member
    return 0;
}
