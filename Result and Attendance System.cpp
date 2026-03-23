#include <iostream>
#include  <string>
using namespace std;

class Marks
{
public:
    int marks_scored;
};

class Attendance
{
public:
    int attendance_pct;
};

class StudentRecord : public Marks, public Attendance
{
public:
    string name;
};

int main()
{
    StudentRecord student;

    getline(cin, student.name);
    cin >> student.marks_scored;
    cin.ignore();
    cin >> student.attendance_pct;

    cout << endl;

    cout << "Student: " << student.name << endl
        << "Marks: " << student.marks_scored << endl
        << "Attendance: " << student.attendance_pct << endl
        << "Eligible for Exam: ";

    if (student.attendance_pct >= 75)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl << endl;

    return 0;
}
