#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
};

class Member : public Person
{
public:
    int id;
};

class PremiumMember : public Member
{
public:
    int borrowed;
};

int main()
{
    PremiumMember member_object;

    
    getline(cin, member_object.name);
    cin >> member_object.id;
    cin.ignore();
    cin >> member_object.borrowed;
    cin.ignore();

    cout << "Member Name: " << member_object.name << endl
        << "Member ID: " << member_object.id << endl
        << "Books Borrowed: " << member_object.borrowed << endl
        << "Status: ";

    if (member_object.borrowed <= 10 && member_object.borrowed > 0)
    {
        cout << "Within Limit";
    }
    else
    {
        cout << "Limit exceeded";
    }
    cout << endl << endl;

    return 0;
}

