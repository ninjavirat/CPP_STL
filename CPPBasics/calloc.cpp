// ptr = (cast-type*)calloc(n, element-size);
// For Example:
// ptr = (float*) calloc(25, sizeof(float));
// This statement allocates contiguous space in memory for 
// 25 elements each with the size of float.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // This pointer will hold the
    // base address of the block created
    int *ptr;
    int n, i, sum = 0;

    // Get the number of elements for the array
    n = 5;
    cout << "Enter number of elements: " << n << endl;

    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        cout << "Memory not allocated" << endl;
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        cout << "Memory successfully allocated using calloc << endl;

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        cout << "The elements of the array are: ";
        for (i = 0; i < n; ++i) {
            cout << ptr[i] << ", ";
        }
    }

    return 0;
}
