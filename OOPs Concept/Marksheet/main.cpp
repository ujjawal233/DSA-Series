#include <iostream>
#include <string>

using namespace std;

// Include logic file
#include "marksheet.cpp"

int main()
{
    string name;
    float tenth;
    float twelfth;
    float cgpa;

    bool degreeCompleted;

    string degreeName;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter 10th Percentage: ";
    cin >> tenth;

    cout << "Enter 12th Percentage: ";
    cin >> twelfth;

    cout << "Enter CGPA: ";
    cin >> cgpa;

    int degreeChoice;

    cout << "\nIs Degree Completed?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> degreeChoice;

    if (degreeChoice == 1)
    {
        degreeCompleted = true;
    }
    else
    {
        degreeCompleted = false;
    }

    cout << "\nEnter Degree Name: " << degreeName << endl;
    cin >> degreeName;

    cin.ignore();

    SuitableDegree student(
        name,
        tenth,
        twelfth,
        cgpa,
        degreeCompleted,
        degreeName);

    student.displayStudentDetails();

    student.checkSchoolEducation();

    student.checkDegree();

    student.checkSuitableDegree();

    student.studentBehaviour();

    return 0;
}
