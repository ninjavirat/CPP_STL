// Usage of ... in function argument: This spread operator is the indication of declaring the function as accepting variable arguments.
// va_list: Stores the list of variable arguments recieved.
// va_arg: Retrieves the next value in the va_list with the type passed as the parameter.
// va_end: Clean up the argument list.
#include <bits/stdc++.h>
using namespace std;

double average(int num, ...) {  
    va_list args;
    double sum = 0;
    
    va_start(args, num);
    for (int i = 0; i < num; i++)
        sum += va_arg(args, double);
    va_end(args);
    
    return sum / num;
}

int main()
{
    cout << average (3, 1, 2, 3) <<endl; //6.95312e-310
    cout << average (5, 1, 2, 3, 4, 5) <<endl; //4.16905e-310
    
    return 0;
}
