// Operator Overloading of + Operator

#include <iostream>
using namespace std;

class Complex
{
public:
    int r;
    int i;

    Complex (int a, int b)
    {
        r = a;
        i = b;
    }

    Complex operator+ (Complex c)
    {
        Complex temp(0,0);
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }

    void display()
    {
        cout<<r<<" + "<<i<<"i"<<endl;
    }

};

int main()
{
    Complex c1(1,2);
    Complex c2(2,3);

    Complex c3 = c1+c2;

    cout<<"First Number : ";
    c1.display();

    cout<<"Second Number : ";
    c2.display();

    cout<<"Sum = ";
    c3.display();

    return 0;
}