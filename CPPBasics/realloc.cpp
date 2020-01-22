
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
        cout << "Memory successfully allocated using calloc" << endl;

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        cout << "The elements of the array are: " << endl;
        for (i = 0; i < n; ++i) {
            cout << ptr[i] << ", " ;
        }

        // Get the new size for the array
        n = 10;
        cout << endl << endl << "Enter the new size of the array: " << n << endl;

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, n * sizeof(int));

        // Memory has been successfully allocated
        cout << "Memory successfully re-allocated using realloc" << endl;

        // Get the new elements of the array
        for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        cout << "The elements of the array are: ";
        for (i = 0; i < n; ++i) {
            cout << ptr[i] << ", ";
        }

        free(ptr);
    }

    return 0;
}
