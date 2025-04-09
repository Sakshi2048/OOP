#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float marks;

    // 1. Default Constructor
    Student()
    {
        cout << "Default Constructor called" << endl;
        name = "Unnamed";
        marks = 0.0;
    }

    // 2. Parameterized Constructor
    Student(string n, float m)
    {
        cout << "Parameterized Constructor called" << endl;
        name = n;
        marks = m;
    }

    // 3. Copy Constructor (without using 'const')
    Student(Student &s)
    {
        cout << "Copy Constructor called" << endl;
        name = s.name;
        marks = s.marks;
    }

    // Method to display student data
    void print()
    {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "\nCreating s1 using Default Constructor:" << endl;
    Student s1; // Default Constructor
    s1.print();

    cout << "\nCreating s2 using Parameterized Constructor:" << endl;
    Student s2("Sakshi", 95.5); // Parameterized Constructor
    s2.print();

    cout << "\nCreating s3 using Copy Constructor (copying s2):" << endl;
    Student s3(s2); // Copy Constructor
    s3.print();

    return 0;
}
