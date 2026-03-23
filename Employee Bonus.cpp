#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string employee_name;
    float salary;
};

class Manager : public Employee
{
public:
    float bonus;
};

int main()
{
    Manager manager_object;

    cout << "Manager Name: ";
    getline(cin, manager_object.employee_name);

    cout << "Salary: ";
    cin >> manager_object.salary;
    cin.ignore();

    cout << "Bonus: ";
    cin >> manager_object.bonus;
    cin.ignore();

    cout << "Total Income: " << manager_object.salary + manager_object.bonus << endl;

    return 0;
}

