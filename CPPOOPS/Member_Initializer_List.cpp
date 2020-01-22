
#include <bits/stdc++.h>
using namespace std;

class Employee {
public: // public access-modifier
    string id, name;
    int years;

    Employee(string id, string name, int years)
        : id(id), name(name), years(years)
    {
        // extra code to run after initialization
    }

    // does the same as:
    // Employee(string id, string name, int years) {
    // this->id = id;
    // this->name = name;
    // this->years = years;

    //     // extra-code to run after initialization
    // }

    void getDetails()
    {
        cout << "ID: " << id << ", Name: " << name
             << ", Experience: " << years << endl;
    }
};

int main()
{
    Employee emp("GFG123", "John", 4);

    emp.getDetails();

    return 0;
}
