#include <iostream>
using namespace std;

class Calculator {
public:

    // Sum of two integers
    int sum(int a, int b) {
        return a + b;
    }

    // Sum of three integers
    int sum(int a, int b, int c) {
        return a + b + c;
    }

    // Sum of two floating-point numbers
    float sum(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 10 and 20 (int): " << calc.sum(10, 20) << endl;
    cout << "Sum of 1, 2 and 3 (int): " << calc.sum(1, 2, 3) << endl;
    cout << "Sum of 2.5 and 4.5 (float): " << calc.sum(2.5f, 4.5f) << endl;

    return 0;
}
