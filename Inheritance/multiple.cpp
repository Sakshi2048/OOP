#include <iostream>
using namespace std;

// multiple : A class inherits from more than one base class.

class Father {
public:
    void showFather() {
        cout << "Father's traits" << endl;
    }
};

class Mother {
public:
    void showMother() {
        cout << "Mother's traits" << endl;
    }
};

class Child : public Father, public Mother {
    // Inherits from both Father and Mother
};

int main() {
    Child c;
    c.showFather();
    c.showMother();
    return 0;
}
