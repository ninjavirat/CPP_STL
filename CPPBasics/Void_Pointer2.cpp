
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    float f = 6.5;
    string s = "Hello World";
    
    void *p;
    
    p = &x;  //valid
    p = &f;  //valid
    p = &s;  //valid
    
    //cout << *p << endl; //error
    cout << *(static_cast<string*>(p)) << endl; //Hello World
}
