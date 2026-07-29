#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    // Data members
    int id;
    string name;
    float marks;

    // Method to display student details
    void displayDetails()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------" << endl;
    }
};

int main()
{
    // Create two student objects
    Student s1;
    Student s2;

    // Assign values to the first object
    s1.id = 101;
    s1.name = "Alice";
    s1.marks = 88.5;

    // Assign values to the second object
    s2.id = 102;
    s2.name = "Bob";
    s2.marks = 92.0;

    // Display their details
    cout << "Student 1 Details:" << endl;
    s1.displayDetails();

    cout << "Student 2 Details:" << endl;
    s2.displayDetails();

    return 0;
}
