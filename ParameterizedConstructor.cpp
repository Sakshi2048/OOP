#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float marks;

    // Parameterized Constructor
    Student(string n, float m) // Takes two parameters: n (name) and m (marks)
    {
        cout << "constructor called" << endl; 
        name = n;      // Assign the passed name to the object's 'name' variable
        marks = m;     // Assign the passed marks to the object's 'marks' variable
    }

    // Method to print student details
    void print()
    {
        cout << name << " " << marks << endl;
    }
};

int main()
{
    // Creating an object using the parameterized constructor
    Student s1("Sakshi", 95.5); // Constructor is called with arguments
    s1.print(); // Output: Sakshi 95.5

    Student s2("Mahi", 88); // Another object with different data
    s2.print(); // Output: Mahi 88

    return 0;
}
