#include <iostream>
using namespace std;

class Student{

public:
   //Attributes / properties of student
    string name;
    float marks;

    // Methods (member functions)
    void setMarks(float a)
    {
        marks = a;
    }

    void print()
    {
        cout<<name<<"  "<<marks<<endl;
    }



};
int main(){
    
    Student s1;
    Student s2;

    s1.setMarks(100);
    s1.name = "Sakshi";
    s1.print();

    s2.setMarks(98);
    s2.name = "Mahi";
    s2.print();

    return 0;
}