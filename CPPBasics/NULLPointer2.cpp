
#include <bits/stdc++.h>
using namespace std;

void fun(int x) { cout << "Integer Call: " << x << endl; }
void fun(int *x) { cout << "Pointer Call: " << x << endl; }

int main()
{
    int *p = NULL;
    
    fun(0);    //Integer Call: 0
    fun(p);    //Pointer Call: 0
    //fun(NULL);   //ambiguity issue
    fun(nullptr); //0
    return 0;
}
