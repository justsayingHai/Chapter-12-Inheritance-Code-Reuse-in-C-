#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Doctor : public Person
{
public:
    string specialization;
};

class Patient : public Person
{
public:
    string disease_name;
};

int main()
{
    Doctor doc_object;
    Patient patient_object;

    getline(cin, doc_object.name);
    cin >> doc_object.age;
    cin.ignore();
    getline(cin, doc_object.specialization);
    getline(cin, patient_object.name);
    cin >> patient_object.age;
    cin.ignore();
    getline(cin, patient_object.disease_name);



    cout << endl;

    cout << "Doctor: " << doc_object.name << endl
        << "Age: " << doc_object.age << endl
        << "Specialization: " << doc_object.specialization << endl
        << "Patient: " << patient_object.name << endl
        << "Age: " << patient_object.age << endl
        << "Disease: " << patient_object.disease_name << endl;

    return 0;
}

