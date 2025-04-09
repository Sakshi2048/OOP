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

class B : virtual public A
{
    // show() function is inherited
};
class C : virtual public A
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
    
    obj.show(); 

    return 0;
}
