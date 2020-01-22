/*Given two arrays a[] and b[] of equal size.
The task is to sort the array b[] according to the elements of array a[]. 
That is, elements of the array b[] should be rearranged by following the corresponding elements of array a[] as appeared in sorted order. */
/*****************************************************************************************************************************************************/
// Program to implement sort an array
// according to another array

#include<bits/stdc++.h>
using namespace std;

// Function to sort the elements of array b[]
// according to the elements of array a[]
void pairSort(int a[], char b[], int n)
{   
    // Create an array of pairs
    pair<int, int> arr_p[n];
    
    // Fill the array of pairs such that 
    // first element of pair is the elements of a[]
    // second element of pair is the corresponding
    // element of array b[]
    for(int i = 0; i < n; i++)
    {
        arr_p[i].first = a[i];
        arr_p[i].second = b[i];
    }
    
    // Sort the array of pairs
    // By default, the sort function sorts a 
    // container by first element
    sort(arr_p, arr_p + n);
    
    for(int i = 0; i < n; i++)
    {
        b[i] = arr_p[i].second;
    }
    
    // Print the elements of pairs
    for(int i = 0; i < n; i++)
    {
        cout<<"("<<arr_p[i].first <<", "<<b[i]<<") "; //(1, B) (2, A) (3, F) (4, D) (5, C) (6, G) (7, H) (8, E)
    }

}

// Driver Code
int main()
{   
    // Inputs
    int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    
    pairSort(a, b, n);
    
    return 0;
}
