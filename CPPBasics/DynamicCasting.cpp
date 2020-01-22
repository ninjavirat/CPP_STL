//Dynamic Cast - Used for handling polymorphism.
//One can assign derived class object to parent/base class reference using this casting.
//e.g. We have a pointer to Base Class, but we want to access members defined only in Derived Class.

#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        virtual ~Base() {}
};

class Derived: public Base {
    public:
        void printChild() {
            cout << "I'm in Child\n";
        }
};

int main()
{
    Base *b = new Derived();
    
    Derived *d = dynamic_cast<Derived*>(b);
    d->printChild(); //I'm in Child
    
    return 0;
}
