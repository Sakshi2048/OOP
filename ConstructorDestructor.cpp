#include <iostream>
using namespace std;

class Parent{
    public:
    Parent()
    {
        cout<<"Parent Constructor"<<endl;
    }

    ~ Parent()
    {
        cout<<"Parent Destructor"<<endl;
    }

};

class Child : public Parent{
    public:
    Child()
    {
        cout<<"Child Constructor"<<endl;
    }

    ~ Child()
    {
        cout<<"Child Destructor"<<endl;
    }
};



int main(){

    Child c1;
    
    return 0;
}