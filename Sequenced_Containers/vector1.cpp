/**************************************************************************************** /
Below is a sample program to traverse vectors using for loop:
******************************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";  //10 5 20
        
    return 0;
}

/**************************************************************************************** /
Traversing vectors using modified for loop:
******************************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
    for(int x:v)
        cout<<x<<" "; //10 5 20
        
    return 0;
}

/**************************************************************************************** /
Traversing Vectors using Iterators:
******************************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
    // Declaring Iterator
    vector<int> :: iterator itr;
    
    for(itr = v.begin(); itr!=v.end(); itr++)
        cout<<*itr<<" ";             //10 5 20
    
    cout<<endl;
    
    // Traversing again using new iterator
    // using auto keyword
    for(auto itr2 = v.begin(); itr2!=v.end(); 
                                       itr2++)
        cout<<*itr2<<" ";            //10 5 20
        
    return 0;
}

/**************************************************************************************** /
Initializing Vector using an Array:
Note: We can initialize a vector with any other container also by simply passing 
the address of the first element of that container and address just after the last element.
******************************************************************************************/



#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {10, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> v(arr, arr+n);
    
    // Traversing vector using new iterator
    // using auto keyword
    for(auto itr = v.begin(); itr!=v.end(); 
                                       itr++)
        cout<<*itr<<" "; //10 5 20
        
    return 0;
}

/**************************************************************************************** /
Internal Working of Vectors(Compiler Dependent):
******************************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Create an empty vector
    vector<int> vec;
    
    // Display its capacity
    cout<<vec.capacity(); //0
        
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Create an empty vector
    vector<int> vec;
    
    // For 1 element, it allocates only 1 space
    vec.push_back(10);
    cout<<vec.capacity()<<endl;//1
    
    // For a new element, it doubles the space
    // to store 2 elements
    vec.push_back(10);
    cout<<vec.capacity()<<endl;//2
    
    // For a new element, it doubles space to 4
    // to store the 3rd element
    vec.push_back(10);
    cout<<vec.capacity();//4
        
    return 0;
}
/* ************************************************************************************************ /
 ///////////////////////////////////////////////////////////////////////////////////
**************************************************************************************** */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{5,2,4,8};
    v.pop_back();    //After removing the last element 5 2 4
    cout<<v[v.size()-1]<<endl; //4
    cout<<v.front()<<endl;      //5
    cout<<v.back()<<endl;      //4
    v.front()=24;   //24 5 2 4
    cout<<endl;
    for(auto x:v)
    	cout<<x<<" ";  //24 2 4
    cout<<endl;
    v.insert(v.begin(),20); //20 24 2 4 
    for(auto x:v)
    	cout<<x<<" ";
    cout<<endl;
    v.front()=18;
    for(auto x:v)
    	cout<<x<<" "; //18 24 2 4
    cout<<endl;
    
    v.erase(v.begin());
    for(auto x:v)
    	cout<<x<<" "; //24 2 4
    cout<<endl;
    
    v.erase(v.begin(),v.end()-1);
    for(auto x:v)
    	cout<<x<<" "; //4
    cout<<endl;
    
    v.resize(4);
    for(auto x:v)
    	cout<<x<<" "; //4 0 0 0
    cout<<endl;
    
    v.resize(6,8);
    for(auto x:v)
    	cout<<x<<" "; //4 0 0 0 8 8
    cout<<endl;
    
    
    
    v.clear();
    if(v.empty()){
    	cout<<"Vector is Empty"<<endl;  //Vector is Empty
    }else{
    	cout<<"Not Empty"<<endl;
    }
    
    
    
    
    
    
    return 0;
}
/****************************************************************************************************************
// C++ Program to return a List of integer
// with values less than K
****************************************************************************************************************/                                                                                             
                                                                                                

#include<bits/stdc++.h>
using namespace std;

// Function to return a list of integers from 
// an array with values less than K
vector<int> fun(int arr[], int n, int k)
{   
    // Create a vector for the output list
    vector<int> V;
    
    // Traverse the array
    for(int i = 0; i < n; i++)
    {   
        // Store elements in the output list
        // whose value is less than K
        if (arr[i] < k) 
            V.push_back(arr[i]);
    }
    
    // return the output list
    return V;
}

// Driver Code
int main()
{
    // Input
    int arr[] = {17, 10, 20, 13, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    
    // Traverse and print elements of 
    // returned list
    for(auto x:fun(arr, n, k)) //10 13 7 9
        cout<<x<<" ";
    
    return 0;
}

/****************************************************************************************************************
// Program to sort students data
// according to marks
****************************************************************************************************************/                                                                                             

#include <bits/stdc++.h>
using namespace std;

// Comparator function to sort according to
// second element
bool sortbysec(const pair<int, int>& p1,
               const pair<int, int> p2)
{
    return p1.second < p2.second;
}

// Function to sort students data
// according to marks
void displaySorted(int roll_no[], int marks[], int n)
{
    // Create a vector of pair to
    // store students data
    vector<pair<int, int> > vp;

    // Traverse the arrays and store elements in vector
    for (int i = 0; i < n; i++) {
        vp.push_back(make_pair(roll_no[i], marks[i]));
    }

    // Sort the vector according to second element
    // using Comparator function
    sort(vp.begin(), vp.end(), sortbysec);

    // Print the sorted vector
    cout << "Roll No"
         << "   "
         << "Marks\n";
    for (int i = 0; i < vp.size(); i++) {
        cout << vp[i].first << "\t  " << vp[i].second << "\n";
    }
}

// Driver Code
int main()
{
    // Input
    int roll_no[] = { 17, 20, 15, 1, 5 };
    int marks[] = { 80, 75, 93, 78, 84 };
    int n = sizeof(roll_no) / sizeof(roll_no[0]);

    displaySorted(roll_no, marks, n);

    return 0;
}
/************************************************************
Roll No   Marks
20      75
1      78
17      80
5      84
15      93
************************************************************/

/****************************************************************************************************************
Problem: Given a vector, keep track of the present indexes
corresponding to each element and after sorting print element with its previous respective indexes.

****************************************************************************************************************/           


// C++ implementation to keep track
// of previous indexes
// after sorting a vector

#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n)
{

    // Vector to store element
    // with respective present index
    vector<pair<int, int> > vp;

    // Inserting element in pair vector
    // to keep track of previous indexes
    for (int i = 0; i < n; ++i) {
        vp.push_back(make_pair(arr[i], i));
    }

    // Sorting pair vector
    sort(vp.begin(), vp.end());

    // Displaying sorted element
    // with previous indexes
    // corresponding to each element
    cout << "Element\t"
         << "index" << endl;
    for (int i = 0; i < vp.size(); i++) {
        cout << vp[i].first << "\t"
             << vp[i].second << endl;
    }
}

// Driver code
int main()
{
    int arr[] = { 2, 5, 3, 7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArr(arr, n);

    return 0;
}

/*********************
Element    Index
1          4
2          0
3          2
5          1
7          3
**********************/

/*******************************************************************
Input:  arr[] = {2, 5, 3, 7, 1} 
Output:  
{1, 4} 
{2, 0} 
{3, 2} 
{5, 1} 
{7, 3}

Explanation:  
Before sorting [index(element)]: [0(2), 1(5), 2(3), 3(7), 4(1)] 
After sorting [previous_index(element)]: [4(1), 0(2), 2(3), 1(5), 3(7)]

Input:  arr[] = {4, 5, 10, 8, 3, 11}
Output:  
{3, 4} 
{4, 0} 
{5, 1} 
{8, 3} 
{10, 2} 
{11, 5}

***********************************************************************************/