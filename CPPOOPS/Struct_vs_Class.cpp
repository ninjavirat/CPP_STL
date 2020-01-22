//In C++, a structure is the same as a class except for a few differences. 
//The most important of them is security.
//A Structure is not secure and cannot hide its implementation details from the end user while a class is secure and can hide its programming and designing details. 
//Following are the points that expound on this difference:
//Members of a class are private by default and members of a struct are public by default. e.g.

#include <bits/stdc++.h>
using namespace std;

struct A {
    int x; // x is public
};

class B {
    int x; // x is private
};

int main()
{
    A a;
    B b;
    
    cout << a.x << endl;
    cout << b.x << endl;
    
    return 0;
}
/*****************************************************************************/
//Error: prog.cpp: In function 'int main()':
// prog.cpp:10:9: error: 'int B::x' is private
//      int x; // x is private
//          ^
// prog.cpp:19:15: error: within this context
//      cout << b.x << endl;
//               ^
/******************************************************************************/
