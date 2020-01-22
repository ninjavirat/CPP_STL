
#include <bits/stdc++.h>
using namespace std;
 
class Base
{
    public:
        void whoami() {
            cout << "I'm Base\n"; //I'm Base
        }
};
 
class Derived: public Base
{
    public:
        void whoami() {
            cout << "I'm Derived\n";
        }
};
 
int main(void)
{
    Base *b_ptr = new Derived;
    
    //run-time polymorphism
    b_ptr->whoami(); //I'm Base
    return 0;
}
//In the above code, since, the pointer reference is of Base-type, 
//so at runtime, it is resolved to call the whoami() version of the Base class.
//Therefore, "I'm Base" is printed. But, suppose we want to call the Derived Class's version of the function. 
//Here, comes the play of virtual keyword.
