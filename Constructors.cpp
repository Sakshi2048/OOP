#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float marks;

    // Default Constructor  - used to initialize a default value to object attributes
    Student()
    {
        cout << "default constructor" << endl; 
        name = "default_name";                 // Initialize 'name' with a default value
        marks = 0.00;                          // Initialize 'marks' with a default value
    }
};

int main()
{
    Student s1; // When s1 is created, the default constructor is automatically called

    cout << s1.name << " " << s1.marks << endl;

    return 0;
}
