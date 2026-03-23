#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
};

class Student : public Person
{
public: 
    int roll_num;
};

class Teacher : public Person
{
public:
    string subject_name;
};

int main()
{
    Student student_object;
    Teacher teacher_object;

    getline(cin, student_object.name);
    cin >> student_object.roll_num;
    cin.ignore();
    getline(cin, teacher_object.name);
    getline(cin, teacher_object.subject_name);

    cout << endl;

    cout << "Student Name: " << student_object.name << endl
        << "Roll Number: " << student_object.roll_num << endl
        << "Teacher Name: " << teacher_object.name << endl
        << "Subject: " << teacher_object.subject_name << endl;

    return 0;
}

