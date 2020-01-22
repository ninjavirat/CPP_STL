
#include <bits/stdc++.h>
using namespace std;

class Array {
public:
    int n;
    int* ref;

    Array(int n)
        : n(n)
    {
        ref = new int[n];

        for (int i = 0; i < n; i++)
            *(ref + i) = i;
    }
};

int main()
{
    Array arr1(10);

    // copy constructor called
    // at this point
    Array arr2 = arr1;

    // changing n-value in 2nd instance
    arr2.n = 5;

    // changing array-values in 2nd instance
    for (int i = 0; i < 10; i++)
        *(arr2.ref + i) *= 2;

    cout << "n-value of 1st instance: " << arr1.n << endl; //10
    cout << "Array values of 1st instance:\n"; //0 2 4 6 8 10 12 14 16 18 
    for (int i = 0; i < 10; i++)
        cout << *(arr1.ref + i) << " ";
    cout << endl;

    return 0;
}
/*************************************************************************************************************************************/
//In the above code, we find the value of member n for t1 not modified as it is not a pointer value. Thus, upon copying new instance of n got created for t2. 
//Any change to n in t2 didn't change t1.n. However, t1.ref is a pointer. So, upon copy-constructor call, the address value got copied to t2.ref,
//and thus, any change at t2.ref (as we here are multiplying by 2), gets reflected at t1.ref also because both of them are pointing to the same array. 
//This is an example of a shallow-copy.
//To fix this, we write our custom copy-constructor:



/*************************************************************************************************************************************/
