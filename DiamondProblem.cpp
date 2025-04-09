#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Show function of class A" << endl;
    }
};

class B : public A
{
    // show() function is inherited
};
class C : public A
{
    // show() function is inherited
};

class D : public B, public C
{
    // show() function is inherited twice
};

int main()
{
    D obj;

    //obj.show();  //error: request for member 'show' is ambiguous (ambiguity : which show from B or C)

    // Solution - manual -> using scope resolution operator

    obj.B :: show();
    obj.C :: show();

    return 0;
}
