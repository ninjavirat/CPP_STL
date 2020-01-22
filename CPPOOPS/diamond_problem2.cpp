//In the above program, the constructor of the Person is called two times.
//The destructor of Person will also be called two times when the object ta is destructed. So object ta has two copies of all members of Person, this causes ambiguity. The solution to this problem is using virtual classes. We make the classes Faculty and Student as virtual base classes to avoid two copies of Person in the TA class. As an example, 
//consider the following program:
#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
        Person(int x) { cout << "Person::Person(int) called" << endl; }
        Person() { cout << "Person::Person() called" << endl; }
};

class Faculty : virtual public Person {
    public:
        Faculty(int x) : Person(x)   {
            cout << "Faculty::Faculty(int) called" << endl;
        }
};

class Student : virtual public Person {
    public:
        Student(int x) : Person(x) {
            cout << "Student::Student(int) called" << endl;
        }
};

class TA : public Faculty, public Student  {
    public:
        TA(int x) : Student(x), Faculty(x) {
            cout << "TA::TA(int) called" << endl;
        }
};

int main()  {
    TA ta(30);
}
/************************************************************************/
// Person::Person() called
// Faculty::Faculty(int) called
// Student::Student(int) called
// TA::TA(int) called
/************************************************************************/
//In the above program, the constructor of the Person is called once.
//One important thing to note in the above output is the default constructor of Person is called. 
//When we use the virtual keyword, the default constructor of grandparent class is called by default
//even if the parent classes explicitly call the parameterized constructor
/********************************************************************************/