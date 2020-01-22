// It is not mandatory for the programmer to write a constructor for each class.
// C++ by default provides a default constructors with no parameters, 
// and no statements for the body. Much like being:
// Employee() {}   //as per our example
////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

class Employee {
public: // public access-modifier
    string id, name;
    int years;
};

int main()
{
    Employee emp;
    return 0;
}
