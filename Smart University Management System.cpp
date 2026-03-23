#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class AcademicInfo
{
public:
    string department_name;
};

class SportsInfo
{
public:
    string sport_name;
};

class Student : public Person
{
public:
    int roll_number;
};

class GraduateStudent : public Student
{
public:
    string degree_name;
};

class StudentLeader : public GraduateStudent, public SportsInfo, public AcademicInfo
{
public:
    string leadership_role;
};

class Teacher : public Person, public AcademicInfo
{
public:
    string subject_name;
};

int main()
{
    StudentLeader student_leader_object;
    Teacher teacher_object;

    getline(cin, student_leader_object.person_name);
    cin >> student_leader_object.age;
    cin.ignore();

    getline(cin, student_leader_object.department_name);
    cin >> student_leader_object.roll_number;
    cin.ignore();

    getline(cin, student_leader_object.degree_name);
    getline(cin, student_leader_object.sport_name);
    getline(cin, student_leader_object.leadership_role);

    getline(cin, teacher_object.person_name);
    cin >> teacher_object.age;
    cin.ignore();

    getline(cin, teacher_object.department_name);
    getline(cin, teacher_object.subject_name);

    cout << "----- Student Leader Details -----" << endl;
    cout << "Name: " << student_leader_object.person_name << endl;
    cout << "Age: " << student_leader_object.age << endl;
    cout << "Department: " << student_leader_object.department_name << endl;
    cout << "Roll Number: " << student_leader_object.roll_number << endl;
    cout << "Degree: " << student_leader_object.degree_name << endl;
    cout << "Sport: " << student_leader_object.sport_name << endl;
    cout << "Leadership Role: " << student_leader_object.leadership_role << endl;

    cout << endl;

    cout << "----- Teacher Details -----" << endl;
    cout << "Name: " << teacher_object.person_name << endl;
    cout << "Age: " << teacher_object.age << endl;
    cout << "Department: " << teacher_object.department_name << endl;
    cout << "Subject: " << teacher_object.subject_name << endl;

    return 0;
}