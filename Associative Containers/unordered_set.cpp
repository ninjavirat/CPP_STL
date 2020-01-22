/**************************************************************************************** /
unordered_set:
**************
* Sets vs Unordered Sets*
-------------------------
Common methods on unoredered_set:
insert()– Inserts a new {element} in the unordered_set container.
begin()– Returns an iterator pointing to the first element in the unordered_set container.
end()– Returns an iterator pointing to the past-the-end-element.
strong>clear()– Removes all of the elements from an unordered_set and empties it.
size()– Return the number of elements in the unordered_set container.
the map also does not allows duplicate key values.
===================================================================================
******************************************************************************************************************************************************************************/

// C++ program to illustrate unordered_set

#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std; 

int main()
{
    unordered_set<int> s;
    
    // Inserting elements using 
    // insert() function
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    
    // Traversing the unordered_set
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";//20 15 10 5(Permutation)
    }
    cout<<endl;
    
    cout<<"Size of unordered_set: "<<s.size()<<endl;//4
    
    // Clear all elements
    s.clear();
    
    cout<<"Size after clearing unordered_set: "
        << s.size()<<endl;//0
    
    return 0;
}

/**************************************************************************************** /
find(): The find() function returns an iterator to end() if key is not there in set, otherwise an iterator to the key position is returned. The iterator works as a pointer to the key values so that we can get the key by dereferencing them using * operator.
count(): The count() function works similar to the find() function. It is used to return the count of a key present in the unordered_set, but as unordered_set doesnot allows duplicates, the count function returns 1 if the key is present in the set or 0 if it is not present.
erase(): The erase() function is used to remove either a single element of a range of elements ranging from start(inclusive) to end(exclusive).
*****************************************************************************************************************************************************************************************/

// C++ program to illustrate unordered_set

#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std; 

int main()
{
    unordered_set<int> s;
    
    // Inserting elements using 
    // insert() function
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    
    // Check if 20 is present using 
    // find() function
    // If the iterator returned by find() does
    // not points to end() iterator then 20 is 
    // present otherwise not
    if(s.find(20)==s.end())
        cout<<"20 not found\n";
    else
        cout<<"20 found\n"; //found
        
    // Check if 20 is present using 
    // count() function
    if(s.count(20)==1)
        cout<<"20 found\n"; //found
    else
        cout<<"20 not found\n";
     
    // Print size before Erasing
    cout<<"Size before erasing: "<<s.size()<<"\n";//4
    
    // Erasing a single element
    s.erase(20);
    
    // Print size after Erasing
    cout<<"Size after erasing: "<<s.size()<<"\n";//3
    
    // Erasing a range
    s.erase(s.begin(), s.end());
    
    cout<<"Size: "<<s.size()<<endl;//0
    
    return 0;
}


/******************************************************************************************************************************************************************
Time Complexity and Internal Working:
-------------------------------------
The unordered_set internally uses HashMap for implementation. The time complexity of operations like search(), insert(), erase(), count() works on O(1) time on average depending on the hash function that how uniformly it is distributing the elements in different sections of the HashTable.

The functions like begin(), end(), rbegin(), rend(), size(), empty() works in constant time, i.e. O(1).
/*****************************************************************************************************************************************************************/
/*Sample Problem: Print Unique Elements of an Array:
/**********************************************************/

// C++ program to print the
// distinct elements of an array
#include <bits/stdc++.h>
using namespace std;

// Function to print unique elements
void printUniqueElememt(int arr[], int n)
{
    // Creating an unordered_set
    unordered_set<int> unique_set;

    // Inserting elements into set
    for (int i = 0; i < n; i++) {
        unique_set.insert(arr[i]);
    }

    // Displaying the set
    for (
        auto it = unique_set.begin();
        it != unique_set.end(); it++) {
        cout << *it << " ";
    }
}

// Driving Method
int main()
{
    int arr[] = {7, 2, 9, 4, 3, 2, 10, 4};
    int n = 7;
    printUniqueElememt(arr, n); //10 3 4 7 9 2
    return 0;
}


/**************************************************************************************** /
Problem: Print duplicate elements of array:
  
******************************************************************************************/

// C++ program to print the
// duplicate elements of array
#include <bits/stdc++.h>
using namespace std;

// Function to print the duplicate
void printDuplicate(int arr[], int n)
{
    // Creating an unordered_set
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        // If repeititions are found
        if (st.find(arr[i]) != st.end())
            cout << arr[i] << " ";

        else
            st.insert(arr[i]);
    }
}

// Driver method
int main()
{
    int arr[] = { 7, 2, 5, 9, 4, 2, 7, 10 };
    int n = 8;
    printDuplicate(arr, n); //2 7
    return 0;
}

/**************************************************************************************** /
Problem : Check for a Pair Sum :
--------------------------------
Input: arr[] = {5, 9, 8, 13, 2, 4}
        n = 6
        sum = 7
Output: True
Explanation: 5 + 2 = 7

Input: arr[] = {5, 9, 8, 13, 2, 4}
        n = 6
        sum = 3
Output: False
Explanation: No pairs sum = 3
******************************************************************************************/
/*****************************************************************************************************************/

// C++ program to check for the pair's sum
// matching to given sum

#include <bits/stdc++.h>
using namespace std;

// Function to check for the pair
bool checkForPair(int arr[], int n, int sum)
{
    
    // Creating an unordered_set
    unordered_set <int> set;
    
    // Loop traversing the array
    for(int i = 0; i < n; i++)
    {
        // Finding the complement
        int comp = sum - arr[i];
        
        // Checking for the complement in
        // the set
        if(set.find(comp)!=set.end())
            return true;
        
        // Inserting the i-th
        // element into the set
        set.insert(arr[i]);
    }
    
    // If no such pair is found
    return false;
}

// Driving code
int main()
{
    // Base array
    int arr[] = {5, 9, 8, 13, 2, 4};
    
    // Size and value and sum
    int n = 6, sum = 7;
    
    // Calling the function to check 
    // for the pair
    cout << checkForPair(arr, n, sum); //1
    return 0;
}

/*************************************************************************************************************************************************************************
Problem: Union of two unsorted arrays :
---------------------------------------
Input: arr1[] = {2, 7, 13, 10}
       arr2[]: {10, 9, 4, 5, 7, 20}
Output: {2, 7, 13, 10, 9, 4, 5, 20} 

Input: arr1[] = {7, 1, 5, 2, 3, 6}
       arr2[] = {3, 8, 6, 20, 7}
Output: {1, 2, 3, 5, 6, 7, 8, 20}
====================================================================================
Approach 1:
This involves printing all the elements of the first array(arr1[m]) and then print all those elements of the second array(arr2[n]) that is not present in the first array.
To search for the elements of arr2[] in arr1[] we will implement the method of linear search. The pseudo-code for the following approach is here.
Time complexity: The printing of arr1[] will take O(m) times. The printing of arr2[] will take O(n) times. The search function being a linear search would take O(m) times. Therefore the print and search operation of second array will take a total of O(n*m) times. The overall time complexity of the program will be O(m) + O(n*m) which is equivalent to O(m*n)
#########################################################################################################################################################################
/************************************************************************************************************************************************************************/

void printUnion(int arr1[], int arr2[], int m, int n)
{
    // Printing arr1[]
    for (i = 0; i < m; i++) {
        cout << arr[i];
    }

    // Printing arr2[]
    for (i = 0; i < n; i++) {
        // Searching for elements
        if (!search(arr2[i], arr1[], m)) {
            cout << arr2[i];
        }
    }
}

// Linear search for arr2[i] in arr1[]
bool search(int x, int arr1[], int m)
{
    for (i = 0; i < m; i++) {
        if (arr[i] == x)
            return true;
        return false;
    }
}


/* ************************************************************************************************ /
Approach 2:
This involves sorting of the first array using the method of QuickSort.
As the array is already sorted, so to search for an element of arr2[] in arr1[] we can use the method of binary search.:
#########################
Time Complexity: The printing of arr1[] will take O(m) times. 
The sorting of the arr1[] being a QuickSort will take O(mlogm) times.
The printing of arr2[] will take O(n) times. The search function being a binary search would take O(log m) times. Therefore the print and search operation of the second array will take a total of O(nlogm) times. The overall time complexity of the program will be O(mlogm) + O(nlogm) which is equivalent to O((m+n)logm) times.
This is better than Approach 1.
----------------------------------------------
**************************************************************************************** */

void printUnion(int arr1[], int arr2[], int m, int n)
{
    // Printing arr1[]
    for (i = 0; i < m; i++) {
        cout << arr[i];
    }

    // Sort using QuickSort
    sort(arr1, arr1 + m)

        // Printing arr2[]
        for (i = 0; i < n; i++)
    {
        // Searching for elements
        if (!search(arr2[i], arr1[], m)) {
            cout << arr2[i];
        }
    }
}

// Binary search for arr2[i] in arr1[]
search(int x, int arr1[], int m)
{
    for (i = 0; i < m; i++) {
        if (arr[i] == x)
            return true;
        return false;
    }
}

/****************************************************************************************************************
Approach 3:
----------
Time Complexity: The printing of arr1[] will take O(m) times and inserting elements into an unordered_set from arr1[] will take O(1) time. The printing of arr2[] will take O(n) times. The search function will take O(1) times as this is an unordered_set. Therefore the print and search operation of the second array will take a total of O(n) times. The overall time complexity of the program will be O(m) + O(n) which is equivalent to O(m+n) times. This is better than Approach 1 and Approach 2 as this performs the operation in linear time.

Space Complexity: Creation of an unordered set will take O(m) time.
****************************************************************************************************************/                                                                                             

// C++ code to find the union of
// two unsorted arrays
#include <bits/stdc++.h>
using namespace std;

// Created an unordered_set
unordered_set<int> s;

// Function to print the union of
// two unsorted arrays
void printUnion(int arr1[], int arr2[],
                int m, int n)
{
    // Inserting arr1 elements
    // into an unordered_set
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
        s.insert(arr1[i]);
    }

    // searching and printing the
    // elements of arr2[] that is
    // absent in arr1[]
    for (int i = 0; i < n; i++) {
        if (s.find(arr2[i]) == s.end()) {
            cout << arr2[i] << " ";
        }
    }
}

// Driving Method
int main()
{
    // First array arr1[]
    int arr1[] = { 7, 6, 13, 10 };
    int m = 4;

    // Second array arr2[]
    int arr2[] = { 10, 9, 4, 5, 7, 20 };
    int n = 6;

    // Calling the Union method
    printUnion(arr1, arr2, m, n);
    return 0;
}


/****************************************************************************************************************
Problem: Intersection of two unsorted arrays :
#################################################
Time Complexity: The loop used to insert elements into an unordered_set from arr2[] will take O(n) time. The second loop used to find and print the elements of arr1[] will take O(m) times. The overall time complexity of the program will be O(m) + O(n) which is equivalent to O(m+n) times. This is better than Approach 1 and Approach 2 as this performs the operation in linear time.

Space Complexity: Creation of an unordered set will take O(n) time.
****************************************************************************************************************/                                                                                             

// C++ code to find the intersection of
// two unsorted arrays
#include<bits/stdc++.h>
using namespace std;

// Created an unordered_set
unordered_set<int> s;

// Function to print the intersection
// of two unsorted arrays
void printIntersect(int arr1[], int arr2[], 
int m, int n)
{
    // Inserting arr2 elements
    // into an unordered_set
    for(int i = 0; i < n; i++)
    {
        s.insert(arr2[i]);
    }
    
    // Searching for arr1[] in arr2[]
    // Printing the common elements
    for(int i = 0; i < m; i++)
    {
        if(s.find(arr1[i]) != s.end())
        {
            cout<<arr1[i]<<" ";
        }
    }
}

// Driving Method
int main()
{
    // First array arr1[]
    int arr1[] = {7, 2, 9, 15, 10};
    int m = 5;
    
    // Second array arr2[]
    int arr2[] = {5, 10, 7, 3, 2, 20, 9};
    int n = 7;fu
    
    // Calling the Intersect method
    printIntersect(arr1, arr2, m, n);
    return 0;
}

/****************************************************************************************************************
 Sample Problem: Distribute Candies:
###################################
Input: {1, 1, 2, 2, 3, 3}

Output: 3

Explanation: In the array, there are 6 candies

and there are 3 types i.e., Type 1, Type 2 and Type 3. So the

sister can get maximum 3 types of candies.

brother = {1, 2, 3}

sister = {1, 2, 3}



Input: {1, 1, 1, 5}

Output: 2

Explanation: In the array, there are 4 candies

and there are 2 types i.e., Type 1 and Type 5. So the sister

can get maximum 2 types of candies.

brother = {1, 1}

sister = {1, 5}



Input: {1, 1, 1, 1}

Output: 1

Explanation: In the array, there are 4 candies

and there are 1 type i.e., Type 1. So the sister can get 

maximum 1 type of candies.

brother = {1, 1}

sister = {1, 1}



Input: {1, 2, 7, 4}

Output: 1

Explanation: In the array, there are 4 candies

and there are 4 types i.e., Type 1, Type 2, Type 7 and Type 4.

So the sister can get maximum 2 type of candies.

brother = {1, 2}

sister = {7, 4}
****************************************************************************************************************/                                                                                             

// C++ program to illustrate
// Candies distribution problem
#include <bits/stdc++.h>
using namespace std;

// Function to return max candies
int distributeCandies(int arr[], int n)
{

    // Creating an unordered_set
    unordered_set<int> set;

    // Inserting the elements into
    // the set
    for (int i = 0; i < n; i++)
        set.insert(arr[i]);

    // Size of the set
    int types = set.size();
    if (types >= n / 2)
        return n / 2;
    else
        return types;
}

// Driving Method
int main()
{
    // Arrays of candies
    int arr[] = { 1, 1, 2, 2, 3, 3 };
    int n = 6;
    cout << distributeCandies(arr, n);
    return 0;
}

/****************************************************************************************************************
