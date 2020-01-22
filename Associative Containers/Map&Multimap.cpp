/**************************************************************************************** /
Map:
****
The map container in C++ STL is an associative container that is used to store key-value pairs in an ordered fashion. By default
the order of elements in the map is in increasing order of the key values, however, we can change this order by providing a user-defined comparison function.
Internally map in C++ STL uses Red-Black trees for implementation and like a set, the map also does not allows duplicate key values.
===================================================================================
Inserting in a map in C++ STL: We can insert values in a map using the insert() function or the "[ ]" operator. 
The difference between these two is that the insert() function takes specific values for both the key and the value and inserts the new pair. However
if we do not provide value with the member access operator "[]", it inserts the default value of the data type provided for that particular key.
******************************************************************************************************************************************************************************/
// C++ Program to illustrate map in C++ STL

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    // empty map container
    map<int, int> m;

    // Insert elements using insert() function
    m.insert({ 10, 100 });
    m.insert({ 30, 300 });

    // Inserting using "[]" operator
    m[20] = 200;

    // Donot provide any value with key 40
    // The operator access the key and since
    // it doesnot exists, it will insert defaut
    // value of int
    m[40];

    // Traverseing map
    cout << "The map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // We can also update the value of an existing
    // key-value pair using "[]" operator which
    // is not possible with insert() function
    m[40] = 400;

    // Traverseing map
    cout << "\nThe map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    return 0;
}

/*###############
The map is : 
    KEY    ELEMENT
    10    100
    20    200
    30    300
    40    0
-----------------
The map is : 
    KEY    ELEMENT
    10    100
    20    200
    30    300
    40    400
###################*/

/**************************************************************************************** /
find() and count() Functions:
----------------------------------------------
The map::find() is a built-in function in C++ STL which returns an iterator or a constant iterator that refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end().
The map::count() is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.

*****************************************************************************************************************************************************************************************/

// C++ program to illustrate map::find()
// map::count() functions
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main()
{

    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });

    // Check if the element 3 exists
    // in the map or not
    if (mp.find(3) != mp.end())
        cout << "3 Found!\n\n"; //3 Found
    else
        cout << "3 Not Found!\n";

    // Using find() function to print elements
    // starting from a given key
    cout << "The elements from position 3 in map are : \n";
    cout << "KEY\tELEMENT\n";

    // find() function finds the position at which 3 is
    for (auto itr = mp.find(3); itr != mp.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';
             
    //3 20
    //4 50

    // Using count to check if the key 4 exists
    if (mp.count(4) != 0)
        cout << "\n4 Found!\n"; //4 Found
    else
        cout << "\n4 Not Found!\n";

    return 0;
}



/******************************************************************************************************************************************************************
lower_bound() function in map:
------------------------------
The map::lower_bound(k) is a built-in function in C++ STL which returns an iterator pointing to the key in the container which is equivalent to k passed in the parameter.
The function returns an iterator pointing to the key in the map container which is equivalent to k passed in the parameter. In case k is not present in the map container, the function returns an iterator pointing to the immediate next element which is just greater than k. 
If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to the number of elements in the map as key and element=0.
/*****************************************************************************************************************************************************************/

// C++ function for illustration
// map::lower_bound() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 10 });
    mp.insert({ 5, 50 });
    mp.insert({ 4, 40 });
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
/*######################
#     // 1 10          #
#    // 2 30           #
#    // 4 40           #
#    // 5 50           #
#######################*/
    // when 2 is present
    auto it = mp.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*it).first << " " << (*it).second << endl; //2 30

    // when 3 is not present
    // points to next greater after 3
    it = mp.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it).first << " " << (*it).second; //4 40

    // when 6 exceeds
    it = mp.lower_bound(6);
    cout << "\nThe lower bound of key 6 is ";
    cout << (*it).first << " " << (*it).second; //4 0
    return 0;
}


/**************************************************************************************** /
upper_bound() function in map:
The map::upper_bound() is a built-in function in C++ STL which returns an iterator pointing to the immediate next element just greater than k. If the key passed in the parameter exceeds the maximum key in the container
then the iterator returned points to the number of elements in the map container as key and element=0.
Syntax:
map_name.upper_bound(key)
The function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container
then the iterator returned points to the number of elements in the map container as key and element=0.
******************************************************************************************/

// C++ function for illustration
// map::upper_bound() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert({ 12, 30 });
    mp.insert({ 11, 10 });
    mp.insert({ 15, 50 });
    mp.insert({ 14, 40 });

    // when 11 is present
    auto it = mp.upper_bound(11);
    cout << "The upper bound of key 11 is ";
    cout << (*it).first << " " << (*it).second << endl; //12 30

    // when 13 is not present
    it = mp.upper_bound(13);
    cout << "The upper bound of key 13 is ";
    cout << (*it).first << " " << (*it).second << endl; //14 40

    // when 17 is exceeds the maximum key, so size
    // of mp is returned as key and value as 0.
    it = mp.upper_bound(17);
    cout << "The upper bound of key 17 is ";
    cout << (*it).first << " " << (*it).second; //4 0
    return 0;
}

/**************************************************************************************** /
map erase() function:
--------------------
The map::erase() is a built-in function in C++ STL which is used to erase element from the container
It can be used to erase keys, elements at any specified position or a given range.
******************************************************************************************/

/*****************************************************************************************************************/

// C++ program to illustrate
// map::erase() function

#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main()
{

    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 5, 50 });

    // Initial size of map
    cout << "Initial size of map: " << mp.size() << "\n";//4

    // function to erase given position
    auto it = mp.find(2);

    // Passing iterator pointing to key 2
    // to erase it
    mp.erase(it);

    cout << "Size after erasing one element: " << mp.size() << "\n"; //3

    // Passing key directly to erase element
    mp.erase(5);

    cout << "Size after erasing second element: " << mp.size() << "\n";//2

    // erasing complete range
    mp.erase(mp.begin(), mp.end());

    cout << "Final Size: " << mp.size() << "\n"; //0

    return 0;
}

/*************************************************************************************************************************************************************************
Time Complexity:
----------------
begin()    --------
end()      -------- \ 
rbegin()   --------  \
rend()     --------    --->  O(1) Time Complexity
size()     --------  /
empty()    -------- /


count()      --------  
find()       --------  \
erase(key)   --------    --->  O(logN) Time Complexity
insert()     --------  /
[] operator  -------- /
#########################################################################################################################################################################
Problem : Print Elements of an Array according to order defined by another Array:
=================================================================================
Given two arrays a1[] and a2[], print elements of a1 in such a way that the relative order among the elements will be the same as those are in a2. That is, elements that come before in the array a2[], print those elements first from the array a1[]. For the elements not present in a2, print them at last in sorted order.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
It is also given that the number of elements in a2[] is smaller than or equal to the number of elements in a1[], and a2[] has all distinct elements.
==================================================
Input: a1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
a2[] = {2, 1, 8, 3}
Output: 2 2 1 1 8 8 3 5 6 7 9

Input: a1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
a2[] = {1, 10, 11}
Output: 1 1 2 2 3 5 6 7 8 8 9
/************************************************************************************************************************************************************************/

// A C++ program to print an array according
// to the order defined by another array
#include <bits/stdc++.h>
using namespace std;

// Function to print an array according
// to the order defined by another array
void print_in_order(int a1[], int a2[], int n, int m)
{
    // Declaring map and iterator
    map<int, int> mp;
    map<int, int>::iterator itr;

    // Store the frequncy of each
    // number of a1[] int the map
    for (int i = 0; i < n; i++)
        mp[a1[i]]++;

    // Traverse through a2[]
    for (int i = 0; i < m; i++) {
        // Check whether number
        // is present in map or not

        if (mp.find(a2[i]) != mp.end()) {
            itr = mp.find(a2[i]);

            // Print that number that
            // many times of its frequncy
            for (int j = 0; j < itr->second; j++)
                cout << itr->first << " ";
            mp.erase(a2[i]);
        }
    }

    // Print those numbers that are not
    // present in a2[]
    for (itr = mp.begin(); itr != mp.end(); itr++) {
        for (int j = 0; j < itr->second; j++)
            cout << itr->first << " ";
    }

    cout << endl;
}

// Driver code
int main()
{
    int a1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int a2[] = { 2, 1, 8, 3 };
    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);

    print_in_order(a1, a2, n, m); //2 2 1 1 8 8 3 5 6 7 9

    return 0;
}


/* ************************************************************************************************ /
multimap:
#########################
The multimap container in C++ is similar to the map container with an addition that a multimap can have multiple key-value pairs with the same key. Rather than each element is unique, the key-value and mapped value pair have to be unique in this case.

Multimap is also implemented using Red-Black trees and hence the basic operations like search, insert, delete works in O(LogN) time for multimap as well.

Some Basic Functions associated with multimap:
----------------------------------------------
begin() – Returns an iterator to the first element in the multimap.
end() – Returns an iterator to the theoretical element that follows the last element in the multimap.
size() – Returns the number of elements in the multimap.
empty() – Returns whether the multimap is empty.
insert(keyvalue,multimapvalue) – Adds a new element to the multimap.

Note: We also have seen an operator "[]" which was used to access and also insert elements in the map container.
However, multimap doesn't allow the use of member access operator "[]" as there can be multiple key-value pairs with the same key.
**************************************************************************************** */

#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    multimap<int, int> mp;
    
    mp.insert({10,20});
    mp.insert({5, 50});
    mp.insert({10,25});
    
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    
    
    /*##############
    #  5 50        #
    #  10 20       #
    #  10 25       #
    ################*/ 
    return 0;
}

/****************************************************************************************************************
Another difference between map and multimap is that for a map container the count() function returns either 1 or 0 depending on whether a key exists in the map or not whereas in a multimap container, the count() function returns the number of occurrences of key in the multimap passed to it as a parameter.

Also, the erase() function in multimap is also similar to that of map container, the difference here is as there can exist multiple key-value pairs with same key, therefore, in multimap, the erase() function will erase all of the key-value pairs of the key provided.
****************************************************************************************************************/                                                                                             

#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    multimap<int, int> mp;
    
    mp.insert({10,20});
    mp.insert({5, 50});
    mp.insert({10,25});
    
    cout<<"Count of the key 10: "<<mp.count(10); //2
    
    // Erase the key 10
    mp.erase(10);
    
    cout<<"\nCount of the key 10: "<<mp.count(10);//0
    
    return 0;
}

/****************************************************************************************************************
lower_bound() function of multimap:
###################################
The multimap::lower_bound(k) is a built-in function in C++ STL which returns an iterator pointing to the key in the container which is equivalent to k passed in the parameter. 
In case k is not present in the multimap container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to key+1 and element = 0.
****************************************************************************************************************/                                                                                             
// C++ program to illustrate 
// multimap::lower_bound() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

    // initialize container 
    multimap<int, int> mp; 

    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 2, 60 }); 
    mp.insert({ 2, 20 }); 
    mp.insert({ 1, 50 }); 
    mp.insert({ 4, 50 }); 

    // when 2 is present 
    auto it = mp.lower_bound(2); 
    cout << "The lower bound of key 2 is "; 
    cout << (*it).first << " "
        << (*it).second << endl; //2 30

    // when 3 is not present 
    it = mp.lower_bound(3); 
    cout << "The lower bound of key 3 is "; //4 50
    cout << (*it).first << " "
        << (*it).second << endl; 

    // when 5 exceeds 
    it = mp.lower_bound(5); 
    cout << "The lower bound of key 3 is "; //6 0
    cout << (*it).first << " "
        << (*it).second << endl; 
    return 0; 
} 

/****************************************************************************************************************
upper_bound() function of multimap:
###################################
The multimap::upper_bound(k) is a built-in function in C++ STL which returns an iterator pointing to the immediate next element which is just greater than k. 
If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to key+1 and element=0.
****************************************************************************************************************/                                                                                             

// C++ program to illustrate
// multimap::upper_bound() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    // initialize container 
    multimap<int, int> mp; 

    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 2, 60 }); 
    mp.insert({ 2, 20 }); 
    mp.insert({ 1, 50 }); 
    mp.insert({ 4, 50 }); 

    // when 2 is present 
    auto it = mp.upper_bound(2); 
    cout << "The upper bound of key 2 is "; 
    cout << (*it).first << " " << (*it).second << endl; //4 50

    // when 3 is not present 
    it = mp.upper_bound(3); 
    cout << "The upper bound of key 3 is "; 
    cout << (*it).first << " " << (*it).second << endl; //4 50

    // when 5 is exceeds the maximum key 
    it = mp.upper_bound(5); 
    cout << "The upper bound of key 5 is "; 
    cout << (*it).first << " " << (*it).second; //6 0
    return 0; 
} 

/****************************************************************************************************************
equal_range() function of multimap:
###################################
The multimap::equal_range() is a built-in function in C++ STL which returns an iterator of pairs. 
The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k. 
If there are no matches with key K, the range returned is of length 0 with both iterators pointing to the first element that has a key consideration to go after k according to the container’s internal comparison object (key_comp).
****************************************************************************************************************/                                                                                             

// C++ program to illustrate the 
// equal_range() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

    // initialize container 
    multimap<int, int> mp; 
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 3, 60 }); 
    mp.insert({ 1, 20 }); 
    mp.insert({ 5, 50 }); 

    // Stores the range of key 1 
    auto it = mp.equal_range(1); 

    cout << "The multimap elements of key 1 is : \n"; 
    cout << "KEY\tELEMENT\n"; 

    // Prints all the elements of key 1 
    for (auto itr = it.first; itr != it.second; ++itr) { 
        cout << itr->first 
            << '\t' << itr->second << '\n'; 
            //1 40
            //1 20
    } 
    return 0; 
} 

/****************************************************************************************************************
Sample Problem: Implementing Dictionary using Multimap :
########################################################
Implement a dictionary using multimap by storing a few words having multiple meanings.
For eg., "Apple" is both a fruit and the name of a company, "Kiwi" is both a fruit and a flightless bird.
*******************
Apple: A fruit

Apple: A company



Kiwi: A fruit

Kiwi: A flightless bird.

****************************************************************************************************************/                                                                                             


// C++ code to implement dictionary
// using a multimap
#include <bits/stdc++.h>
using namespace std;

// Driver method
int main()
{
    // Creating a multimap
    multimap<string, string> dict;

    // Inserting key-value1 pair
    dict.insert(
        pair<string, string>(
            "Apple", "A fruit"));

    // Inserting key-value2 pair
    dict.insert(
        pair<string, string>(
            "Apple", "A company"));

    // Displaying the multimap
    for (auto itr = dict.begin();
         itr != dict.end(); itr++) {
        cout << itr->first << " ";
        cout << itr->second << " " << endl;
    }
}
