//When deriving a struct from a class/struct, default access-specifier for a base class/struct is public. And when deriving a class,
//the default access specifier is private.
/******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
        int x; // x is public
};

class Derived1 : Base
//equivalent to private Base
{
};

struct Derived2 : Base
//equivalent to public Base
{
};

int main()
{
    Derived1 d1;  //class
    Derived2 d2;  //struct
    
    cout << d1.x << endl;
    cout << d2.x << endl;
    
    return 0;
} 
/******************************************************************************/
// Error:prog.cpp: In function 'int main()':
// prog.cpp:8:13: error: 'int Base::x' is inaccessible
//          int x; // x is public
//              ^
// prog.cpp:26:16: error: within this context
//      cout << d1.x << endl;
//                 ^
/*****************************************************************************/
// The above code generates compilation error because of the access statement d1.x. Since we didn't specify the access-modifier for the Base class, x became private in Derived Class.

