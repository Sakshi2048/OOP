#include <iostream>         
using namespace std;   

// Define a class named 'Student'
class Student
{
public:
    // Attributes / properties of the student
    string name;           
    float marks;            

    // Method to set marks for the student
    void setMarks(float a)  
    {
        marks = a;         
    }

    // Method to print student details
    void print()
    {
        cout << name << "  " << marks << endl; 
    }
};

int main()
{
    // Create an object class Student
    Student s1;
    Student s2;

    
    s1.setMarks(100);      // Set marks using the setMarks() function
    s1.name = "Sakshi";    // Assign name 
    s1.print();              // Print details 

  
    s2.setMarks(98);
    s2.name = "Mahi";
    s2.print();

    return 0;   
}
