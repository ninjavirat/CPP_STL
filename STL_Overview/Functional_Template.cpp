
// C++ program to illustrate
// Function Templates
#include <iostream>
using namespace std;

// Function that take
// datatype as an argument
// T is the variable and
// can be extended to multiple types
template <typename T>

// Function of type as this Function
// is going to return an array element
// of type T
T arrMax(T arr[], int n)
{
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
    cout << arrMax<int>(arr1, 3) << endl; //40

    // Floatig point array
    float arr2[] = { 10.5, 3.5, 1.5, 30.5 }; //30.5
    cout << arrMax<float>(arr2, 4);

    return 0;
}
/**************************************************************************************************************************************************************************************************************************************************/
// Working:
***********
// When the integer array(arr1) is passed during the function call of arrMax(), then the compiler generates the following code where all T is being replaced by the data type int and the operation inside arrMax() is executed.
/**************************************************************************************************************************************************************************************************************************************************/

// int arrMax(int arr[], int n)
// {
//     // res variable to store the max
//     // element of type int
//     int res = arr[0];

//     // Loop traversing through the array
//     // Fincding max element
//     for (int i = 1; i < n; i++)
//         if (arr[i] > res)
//             res = arr[i];

//     // Returning the maximum element
//     return res;
// }
//**********************************************************************************************************************************************************************//

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**************************************************************************************************************************************************************************************************************************************************/
// Working:
***********
// When the float array(arr1) is passed during the function call of arrMax(), then the compiler generates the following code where all T is being replaced by the data type float and the operation inside arrMax() is executed.
/**************************************************************************************************************************************************************************************************************************************************/


// float arrMax(float arr[], int n)
// {
//     // res variable to store the max
//     // element of type int
//     float res = arr[0];

//     // Loop traversing through the array
//     // Fincding max element
//     for (int i = 1; i < n; i++)
//         if (arr[i] > res)
//             res = arr[i];

//     // Returning the maximum element
//     return res;
// }
/*****************************************************************************************************************************************************************/