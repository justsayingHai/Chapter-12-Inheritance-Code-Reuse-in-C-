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

class GradStudent : public Student
{
public:
    string degree_name;
};

int main()
{
    GradStudent student_object;

    cout << "Name: ";
    getline(cin, student_object.name);

    cout << "Roll Number: ";
    cin >> student_object.roll_num;
    cin.ignore();

    cout << "Degree: ";
    getline(cin, student_object.degree_name);

    return 0;
}

