
#include <bits/stdc++.h>
using namespace std;

int add(int x, int y) { return x + y; }
string add(string x, string y) { return x + y; }

int main()
{
    //Assign integer add() function to funtion pointer
    int (*fun_ptr_int)(int, int) = add;
    
    // //Assign string add() function to function pointer
     string (*fun_ptr_str)(string, string) = add;
    
    //Calling using function pointer
    cout << fun_ptr_int(5, 6) << endl; //11
    
    cout << fun_ptr_str("Hello ", "World") << endl; //Hello World
    // int fun1();
    // double fun2();
    // int fun3(int);

    // int (*fun_ptr)() = fun1; //valid
    // fun_ptr = fun2;  //invalid (return-type mismatch)
    // fun_ptr = fun3;  //invalid (argument list mismatch)

    
    return 0;
}
