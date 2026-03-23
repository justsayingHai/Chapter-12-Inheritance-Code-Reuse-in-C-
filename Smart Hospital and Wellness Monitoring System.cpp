#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class MedicalInfo
{
public:
    string disease_name;
};

class FitnessInfo
{
public:
    int daily_step_count;
};

class Patient : public Person
{
public:
    string patient_id;
};

class InPatient : public Patient
{
public:
    int room_number;
};

class WellnessPatient : public InPatient, public FitnessInfo
{
public:
    string diet_plan;
};

class Doctor : public Person
{
public:
    string specialization;
};

class VisitingDoctor : public Doctor
{
public:
    string visiting_hours;
};

class HealthAdvisor : public VisitingDoctor, public MedicalInfo
{
public:
    string advice_note;
};

int main()
{
    WellnessPatient wellness_patient_object;
    HealthAdvisor health_advisor_object;

    getline(cin, wellness_patient_object.person_name);
    cin >> wellness_patient_object.age;
    cin.ignore();

    getline(cin, wellness_patient_object.patient_id);
    cin >> wellness_patient_object.room_number;
    cin >> wellness_patient_object.daily_step_count;
    cin.ignore();

    getline(cin, wellness_patient_object.diet_plan);

    getline(cin, health_advisor_object.person_name);
    cin >> health_advisor_object.age;
    cin.ignore();

    getline(cin, health_advisor_object.specialization);
    getline(cin, health_advisor_object.visiting_hours);
    getline(cin, health_advisor_object.disease_name);
    getline(cin, health_advisor_object.advice_note);

    cout << "----- Wellness Patient Details -----" << endl;
    cout << "Name: " << wellness_patient_object.person_name << endl;
    cout << "Age: " << wellness_patient_object.age << endl;
    cout << "Patient ID: " << wellness_patient_object.patient_id << endl;
    cout << "Room Number: " << wellness_patient_object.room_number << endl;
    cout << "Daily Step Count: " << wellness_patient_object.daily_step_count << endl;
    cout << "Diet Plan: " << wellness_patient_object.diet_plan << endl;

    if (wellness_patient_object.daily_step_count >= 7000)
    {
        cout << "Activity Status: Active" << endl;
    }
    else
    {
        cout << "Activity Status: Needs Improvement" << endl;
    }

    cout << endl;

    cout << "----- Health Advisor Details -----" << endl;
    cout << "Name: " << health_advisor_object.person_name << endl;
    cout << "Age: " << health_advisor_object.age << endl;
    cout << "Specialization: " << health_advisor_object.specialization << endl;
    cout << "Visiting Hours: " << health_advisor_object.visiting_hours << endl;
    cout << "Disease Focus: " << health_advisor_object.disease_name << endl;
    cout << "Advice Note: " << health_advisor_object.advice_note << endl;

    return 0;
}