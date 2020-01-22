
#include <bits/stdc++.h>
using namespace std;
//How to call the parameterized constructor of the Person class? The constructor has to be called in TA class:
class Person
{
    public:
        Person(int x) { cout << "Person::Person(int) called" << endl; }
        Person() { cout << "Person::Person() called" << endl; }
};

class Faculty : virtual public Person
{
    public:
        Faculty(int x) : Person(x) {
            cout << "Faculty::Faculty(int) called" << endl;
        }
};

class Student : virtual public Person
{
    public:
        Student(int x) : Person(x) {
            cout << "Student::Student(int) called" << endl;
        }
};

class TA : public Faculty, public Student  {
    public:
        TA(int x) : Student(x), Faculty(x), Person(x) {
            cout << "TA::TA(int) called" << endl;
        }
};

int main()  {
    TA ta(30);
    return 0;
}
/***************************************************************************/
// Person::Person(int) called
// Faculty::Faculty(int) called
// Student::Student(int) called
// TA::TA(int) called
/***************************************************************************/
//In general, it is not allowed to call the grandparent's constructor directly, it has to be called through a parent class. 
//It is allowed only when the virtual keyword is used.