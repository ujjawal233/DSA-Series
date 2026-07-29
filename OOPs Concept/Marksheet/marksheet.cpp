#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string studentName;
    float tenthPercentage;
    float twelfthPercentage;
    float cgpa;

public:
    Student(string name, float tenth, float twelfth, float cgpaValue)
    {
        studentName = name;
        tenthPercentage = tenth;
        twelfthPercentage = twelfth;
        cgpa = cgpaValue;
    }

    void displayStudentDetails()
    {
        cout << "\n==== Student Details ====" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "10th Percentage: " << tenthPercentage << "%" << endl;
        cout << "12th Percentage: " << twelfthPercentage << "%" << endl;
        cout << "CGPA: " << cgpa << endl;
    }
    void studentBehaviour()
    {
        cout << "\n==== Student Behaviour ====" << endl;

        if (cgpa >= 8.0)
        {
            cout << "Behaviour: Excellent Academic Performance" << endl;
        }
        else if (cgpa >= 6.0)
        {
            cout << "Behaviour: Good Academic Performance" << endl;
        }
        else
        {
            cout << "Behaviour: Needs Improvement" << endl;
        }
    }
};

class EducationEligibility : public Student
{
public:
    EducationEligibility(
        string name,
        float tenth,
        float twelfth,
        float cgpaValue)
        : Student(name, tenth, twelfth, cgpaValue)
    {
    }

    void checkSchoolEducation()
    {
        cout << "\n===== School Education Status =====" << endl;

        if (tenthPercentage >= 33)
        {
            cout << "10th: Completed" << endl;
        }
        else
        {
            cout << "10th: Not Completed" << endl;
        }

        if (twelfthPercentage >= 33)
        {
            cout << "12th: Completed" << endl;
        }
        else
        {
            cout << "12th: Not Completed" << endl;
        }
    }
};

class DegreeStatus : public EducationEligibility
{
private:
    bool degreeCompleted;

public:
    DegreeStatus(
        string name,
        float tenth,
        float twelfth,
        float cgpaValue,
        bool degreeStatus)
        : EducationEligibility(name, tenth, twelfth, cgpaValue)
    {
        degreeCompleted = degreeStatus;
    }

    void checkDegree()
    {
        cout << "\n===== Degree Status =====" << endl;

        if (degreeCompleted)
        {
            cout << "Degree: Completed" << endl;
        }
        else
        {
            cout << "Degree: Remaining / Not Completed" << endl;
        }
    }
};

class SuitableDegree : public DegreeStatus
{
private:
    string degreeName;

public:
    SuitableDegree(
        string name,
        float tenth,
        float twelfth,
        float cgpaValue,
        bool degreeStatus,
        string degree)
        : DegreeStatus(
              name,
              tenth,
              twelfth,
              cgpaValue,
              degreeStatus)
    {
        degreeName = degree;
    }

    void checkSuitableDegree()
    {
        cout << "\n===== Suitable Degree =====" << endl;

        if (degreeName == "B.Tech" || degreeName == "BCA")
        {
            cout << "Degree: " << degreeName << endl;
            cout << "Status: Suitable for Computer Science Field" << endl;
        }
        else
        {
            cout << "Degree: " << degreeName << endl;
            cout << "Status: General Degree" << endl;
        }
    }
};