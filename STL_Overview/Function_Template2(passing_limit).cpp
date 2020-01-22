                                                  
/*****************************************************************************************************************************************************************************************************************************************/
// The compiler has the ability to guess the data type of an element or array but is always a good practice to specify the data type of the element being passed. This makes the code more readable and easy to understand.
// The template can also take values as parameters alongside the data type.
//For example, lets put a condition into the above program, where the array will only accept array up to a particular limit of size. We can do this by passing a limit value into the template.
// Note: The template can also accept non-datatype parameters as well,
//but the value passed into the template must be a constant, as the generic code is generated during compile time, and the compiler would need to know the value of the limit is passed. It the passed value is not predefined as constant, 
//then the compiler will throw an error.
/*****************************************************************************************************************************************************************************************************************************************/


// C++ program to illustrate
// Function Templates
#include <iostream>
using namespace std;

// Function that take
// datatype as an argument
// T is the variable and
// can be extended to multiple types
// limit accept an integer value
template <typename T, int limit>

// Function of type as this Function
// is going to return an array element
// of type T
T arrMax(T arr[], int n)
{
    // Program exits if limit exceeds
    if (n > limit) {
        cout << "limit exceeded";
        return 0;
    }
    // res variable to store the max
    // element of type T
    T res = arr[0];

    // Loop traversing through the array
    // Fincding max element
    for (int i = 1; i < n; i++)
        if (arr[i] > res)
            res = arr[i];

    // Returning the maximum element
    return res;
}

// Drivers Method
int main()
{
    // Integer Array
    int arr1[] = { 10, 40, 3 };

    // cout << arrMax<int, 100>(arr1, 3) << endl; //40

    // Floatig point array
    float arr2[] = { 10.5, 3.5, 1.5, 30.5 }; //30.5
    cout << arrMax<float, 50>(arr2, 4);

    return 0;
}
