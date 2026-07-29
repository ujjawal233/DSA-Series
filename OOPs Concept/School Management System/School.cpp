#include <iostream>
using namespace std;

//================ Teacher Class ================
class Teacher
{
private:
    int teacherId;
    string teacherName;
    string subject;
    int experience;

public:
    Teacher(int id, string name, string sub, int exp)
    {
        teacherId = id;
        teacherName = name;
        subject = sub;
        experience = exp;
    }

    void displayTeacher()
    {
        cout << "\n----- Teacher Details -----" << endl;
        cout << "Teacher ID      : " << teacherId << endl;
        cout << "Teacher Name    : " << teacherName << endl;
        cout << "Subject         : " << subject << endl;
        cout << "Experience      : " << experience << " Years" << endl;
    }
};

//================ ClassRoom Class ================
class ClassRoom
{
private:
    int classId;
    string className;

    // HAS-A Relationship
    Teacher teacher;

public:
    ClassRoom(int cid, string cname, int tid, string tname, string subject, int exp)
        : teacher(tid, tname, subject, exp)
    {
        classId = cid;
        className = cname;
    }

    void displayClassRoom()
    {
        cout << "\n===== ClassRoom Details =====" << endl;
        cout << "Class ID        : " << classId << endl;
        cout << "Class Name      : " << className << endl;

        teacher.displayTeacher();
    }
};

//================ School Class ================
class School
{
private:
    int schoolId;
    string schoolName;

    // HAS-A Relationship
    ClassRoom classroom;

public:
    School(int sid,
           string sname,
           int cid,
           string cname,
           int tid,
           string tname,
           string subject,
           int exp)
        : classroom(cid, cname, tid, tname, subject, exp)
    {
        schoolId = sid;
        schoolName = sname;
    }

    void displaySchool()
    {
        cout << "\n===============================" << endl;
        cout << "      SCHOOL MANAGEMENT" << endl;
        cout << "===============================" << endl;

        cout << "School ID       : " << schoolId << endl;
        cout << "School Name     : " << schoolName << endl;

        classroom.displayClassRoom();
    }
};