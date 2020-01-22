// a->b (access member variable using pointer)
// a.b (access member variable using instance)
// *(a->b) (access data value of member pointer variable using pointer)
// *(a.b) (access data value of member pointer variable using instance)
//Following Member-Access Operators can be demonstrated 
//using structures only. 
#include <bits/stdc++.h>
using namespace std;

struct test
{
    int x;
    int *p;
};

int main()
{
    struct test t;
    struct test *ptr_t = &t;
    
    t.x = 5;
    
    int b = 10;
    t.p = &b;
    
    cout << "Direct Access: " << t.x << endl; //5
    cout << "Pointer Access: " << ptr_t->x <<endl; //5
    
    cout << "Direct Access of Pointer: " << *(t.p) << endl; //10
    cout << "Pointer Access of Pointer: " << *(ptr_t->p) << endl; //10
}

// Direct Access: 5
// Pointer Access: 5
// Direct Access of Pointer: 10
// Pointer Access of Pointer: 10
