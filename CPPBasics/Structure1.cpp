
#include <bits/stdc++.h>
using namespace std;

struct Employee {
    string name; // name of person
    int age; // age of person
    double salary; // in lakhs
    bool remote; // whether remote or not
};

int main()
{
    // Initialization-cum-Declaration
    Employee e = { "David", 24, 2.5, true };

    cout << "Name: " << e.name << endl; //David
    cout << "Age: " << e.age << endl; //24
    cout << "Salary: " << e.salary << endl; //2.5
    cout << "Is remote?: " << e.remote << endl; //true Member-access

    Employee* eptr = &e;

    // Access using structure pointer
    cout << "Pointer Access: " << (eptr->name) << endl; //David

    Employee office[10]; // array of employees

    return 0;
}
