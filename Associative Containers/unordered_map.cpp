/**************************************************************************************** /
unordered_map:
**************
The unordered_map is an associated container that stores elements formed by a combination of key-value pair.
The key value is used to uniquely identify the element and mapped value is the content associated with the key. Both key and value can be of any type of predefined or user-defined.

Internally unordered_map is implemented using Hash Table, the key provided to map are hashed into indices of a hash table that is why the performance of data structure depends on hash function a lot but on an average the cost of search, insert and delete from hash table is O(1).
The elements in the unordered_map are unordered and are not stored in any specific order like Map.
===================================================================================
******************************************************************************************************************************************************************************/

// C++ program to demonstrate functionality of unordered_map

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of double type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;

}

/**************************************************************************************** /
Note:Since the find() function returns an iterator pointing to the key-value pair, we can easily access both the key and the value associated to it as:
Key = iterator->first;
Value = iterator->second;
*****************************************************************************************************************************************************************************************/

// C++ program to demonstrate functionality 
// of unordered_map 

#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of int type 
    unordered_map<string, int> umap; 

    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10; 
    umap["Practice"] = 20; 
    umap["Contribute"] = 30; 

    // Searching for the key "Practice"
    if(umap.find("Practice")!=umap.end())
        cout<<"The key Practice Found!\n";
    else
        cout<<"The key Practice Not Found!\n";
    
    // Accessing key value pair returned by find()
    auto it = umap.find("Practice");
    if(it!=umap.end())
        cout<<"Key is: "<<it->first<<", "
            <<"Value is: "<<it->second;
} 


/******************************************************************************************************************************************************************
Some more Functions of unordered_map:
-------------------------------------
begin(): Returns an iterator pointing to the first element in the container in the unordered_map container.
end(): Returns an iterator pointing to the position past the last element in the container in the unordered_map container.
count(): Counts the number of elements present in an unordered_map with a given key. Since keys are unique in an unordered_map, so it is basically used as a replacement of find() sometimes to check if a key-value pair with a given key exists in the unoredered_map or not.
size(): The size function is used to find the total size of the unorered_map. That is, the total number of elements present in the unordered_map.
erase(): The erase function is used to erase a particular element from the unordered_map. It can also be used to erase a range of elements from the map.
/*****************************************************************************************************************************************************************/

// C++ program to demonstrate functionality 
// of unordered_map 

#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value  
    // will be of int type 
    unordered_map<string, int> umap; 

    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10; 
    umap["Practice"] = 20; 
    umap["Contribute"] = 30; 

    // Searching if the key "Practice" exists 
    // using count()
    if(umap.count("Practice")>0)
        cout<<"The key Practice Found!\n";
    else
        cout<<"The key Practice Not Found!\n";
    
    // Printing size of the map before erasing 
    cout<<"Size before erasing: "<<umap.size()<<"\n";
    
    // Erase the key "Practice"
    umap.erase("Practice");
    
    // Printing size after erasing an element
    cout<<"Size after erasing: "<<umap.size()<<"\n";
    
    // Erasing a range
    umap.erase(umap.begin(), umap.end());
    
    // Size after erasing all elements
    cout<<"Size after erasing all elements: "
        <<umap.size();
    
    return 0;
} 

/**************************************************************************************** /
                                         Time Complexities

The operations such as, begin(), end(), size(), empty() works in O(1) time in worst case, where as, the other important functions like count(), find(), erase(key), insert(), [], at() works in O(1) time in average.
  
******************************************************************************************/
//Problem: Find frequencies of elements of array:
/**************************************************************************************** /
Input: arr[] = {10, 20, 20, 10, 10, 5, 15}
Output:
10 - 3
20 - 2
5 - 1
15 - 1

Input: arr[] = {1, 1, 1, 2, 2, 2, 2, 3}
Output:
1 - 3
2 - 4
3 - 1
******************************************************************************************/
/*****************************************************************************************************************/

// Program to find the frequency
// of each element of an array
#include <bits/stdc++.h>
using namespace std;

// Method to find the frequency
// of each element
void printFrequencies(int arr[], int n)
{
    // Creating an unordered_map
    unordered_map<int, int> mp;

    // Counting the frequency
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Printing the frequency of
    // each element
    for (auto x : mp)
        cout
            << x.first << "-" << x.second << endl;
}

// Drivers method
int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 5, 15 };
    int n = 8;

    // Displaying the array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; //10 20 20 10 10 5 15 0
    cout << endl;

    // Calling the function to find
    // the frequency
    printFrequencies(arr, 7);
    return 0;
}


/*************************************************************************************************************************************************************************
15-1
5-1
10-3
20-2
====================================================================================
Problem: Find the winner of election:
-------------------------------------
Input: names[] = {"John", "Rohan", 
" Jackie", "Rohan", "Raju"}
Output: Rohan
Explanation:  Rohan is the winner, as his
name appears twice in the array.

Input: names[] = {"Akbar", "Babur",
 "Birbal", "Ram", "Ram", }
Output: Ram
Explanation:  Ram is the winner, as his
name appears twice in the array.
=================================================
Time Complexity: Time taken for inserting elements to map is O(N) and for traversing map is also O(N). 
This overall time complexity will be O(n).
#########################################################################################################################################################################
/************************************************************************************************************************************************************************/

// C++ program to find the winner
// of election
#include <bits/stdc++.h>
using namespace std;

// Function to find the candidate
// receiving the maximum vote
string findWinner(string votes[], int n)
{
    unordered_map<string, int> mp;
    string winner = " ";

    // Inserting the name and occurences
    for (int i = 0; i < n; i++) {
        mp[votes[i]]++;
        int mx = 0;

        // Comparing the vote ount
        for (
            auto it = mp.begin();
            it != mp.end(); it++) {
            if (it->second > mx) {
                mx = it->second;
                winner = it->first;
            }
        }
    }
    return winner;
}

int main()
{
    string votes[] = { "John", "Rohan",
                       " Jackie", "Rohan",
                       "Raju" };
    int n = 5;
    cout << findWinner(votes, n);//Rohan
}

/* ************************************************************************************************ /
Problem: Find the winner of election if there is a tie:
#########################
Input: names[] = {"John", "Rohan",
 "Jackie", "Rohan", "Raju", "Jackie"}
Output: Jackie
Explanation:  Tie occurs between Rohan and
Jackie but Jackie is the winner, since J comes before R in a
dictionary.

Input: names[] = {"Akbar", "Babur",
 "Birbal", "Ram", "Ram", "Birbal"}
Output: Birbal
Explanation:  Tie occurs between Ram and
Birbal but Birbal is the winner, since B comes before R in a
dictionary.
===========================================================================
Time Complexity: Time taken for inserting elements to map is O(N) and for traversing map is also O(N). This overall time complexity will be O(n).
----------------------------------------------
**************************************************************************************** */

// C++ program to find the winner
// of election and handle the tie case
#include <bits/stdc++.h>
using namespace std;

// Function to find the candidate
// receiving the maximum vote
string findWinner(string votes[], int n)
{
    // Creating an unordered_map
    unordered_map<string, int> mp;

    // Inserting the name and occurences
    for (int i = 0; i < n; i++) {
        mp[votes[i]]++;
    }
    string winner = "";
    int mx = -1;

    // Finding the winner with maximum
    // votes
    for (
        auto it = mp.begin();
        it != mp.end(); it++) {
        // Handling the tie case
        if (
            (
                it->second > mx)
            || ((it->second == mx)
                && (it->first < winner))) {
            mx = it->second;
            winner = it->first;
        }
    }
    return winner;
}

// Driver Method
int main()
{
    string votes[] = { "John", "Rohan",
                       "Jackie", "Rohan",
                       "Raju", "Jackie" };
    int n = 6;
    cout << findWinner(votes, 6);
}


/****************************************************************************************************************
