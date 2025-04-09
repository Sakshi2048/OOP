#include <iostream>
using namespace std;

class Numbers{

    int x;

    public:
    void set(int a)
    {
        x=a;
    }

    int get()
    {
        return x;
    }
};

int main(){

    Numbers n;

    // Since x is private variable we cannot access it with '.' operator directly
    n.set(5);
    cout<<n.get()<<endl;
    
    return 0;
}