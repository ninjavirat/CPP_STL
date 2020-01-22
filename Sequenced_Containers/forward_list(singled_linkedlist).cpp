/**************************************************************************************** /
This program shows the implementation of the forward_list.
******************************************************************************************/

// CPP program to implement
// doubly linked list
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Initialising a forward list
    forward_list<int> l = { 10, 15, 20 };

    // Pushing elements into the list
    l.push_front(5);

    // Pushing elements into the list
    l.push_front(3);

    // Popping out elements from list
    l.pop_front();

    // Displaying the list
    for (int x : l)
        cout << x << " "; //5 10 5 20
    return 0;
}


/**************************************************************************************** /
Important functions in forward_list:
************************************
assign() : This function is used to assign values to forward list, its another variant is used to assign repeated elements.
---------------------------------------------------------------------------------------
remove(): This function removes all the elements from the forward list that is mentioned in its argument.
******************************************************************************************/
// CPP program to implement
// working of assign() and remove()
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Declaring a forward list
    forward_list<int> l;

    // Assigning values to the list
    l.assign({ 10, 20, 30, 10 });

    // Removing elements from list
    l.remove(10);

    // Displaying the list
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " "; //20 30

    return 0;
}

/**************************************************************************************** /
Two variations of assign() function:
******************************************************************************************/
//Program 1: The assign() function can also be used to assign one forward_list to another. This is implemented in the following way:

// CPP program to implement
// working of assign() and remove()
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Declaring a forward list
    forward_list<int> l;

    // Assigning values to the list
    l.assign({ 10, 20, 30, 10 });

    // Declaring another forward list
    forward_list<int> l2;

    // Assigning one list to another
    l2.assign(l.begin(), l.end());

    // Displaying the second list
    for (auto it = l2.begin(); it != l2.end(); it++)
        cout << (*it) << " "; //10 20 30 10

    return 0;
}

/---------------------------------------------------------------------------------
// Program 2: This is another way of using assign() function where two parameters are passed. This function assigns n number of elements to the forward_list and each element is initialised with value val.
// Syntax:
// assign(int n, val)
-----------------------------------------------------------------------------------

// CPP program to implement
// working of assign() and remove()
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Declaring a forward list
    forward_list<int> l;

    // Assigning values to the list
    l.assign(5, 10);

    // Displaying the second list
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";  //10 10 10 10 10

    return 0;
}



/**************************************************************************************** /

insert_after(): This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position. Look into the linked article to get more details.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

emplace_after() This function also does the same operation as above function but the elements are directly made without any copy operation. For a large object of data the emplace_after() function is more optimised than the insert_after() function.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
erase_after() This function is used to erase elements from a particular position in the forward_list.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

******************************************************************************************/

// CPP program to implement
// working of above mentioned functions
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Declaring a forward list
    forward_list<int> l1 = { 15, 20, 30 };

    // Using insert_after() function
    // to insert elements to the list
    // at a particular place
    auto it = l1.insert_after(l1.begin(), 10); //15 10 20 30

    // inserting a set of elements to the list
    it = l1.insert_after(it, { 2, 3, 5 }); //15 10 2 3 5 20 30

    // The function is similar to the insert()
    // function
    it = l1.emplace_after(it, 40);    //15 10 2 3 5 40 20 30

    // Removes an element from the forward_list
    it = l1.erase_after(it); //15 10 2 3 5 40 30

    // Displays the elements in the forward_list
    for (int x : l1)
        cout << x << " "; //15 10 2 3 5 40 30
    cout<<endl;
    
    // Removes an element from it till end()
    it = l1.erase_after(it, l1.end());

    // Displays the elements in the forward_list
    for (int x : l1)
        cout << x << " "; //15 10 2 3 5 40 30

    return 0;
}

/*
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
A variation of erase_after() function: Program: The erase_after() function can take two parameters as a range and delete all the elements in-between.
This function returns the address to the element after the last removed element from the list. In the following program the it iterator would point to the element after 30 i.e., l1.end().
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/


// CPP program to implement
// working of above mentioned functions
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Declaring a forward list
    forward_list<int> l1 = { 15, 20, 30 };

    // Using insert_after() function
    // to insert elements to the list
    // at a particular place
    auto it = l1.insert_after(l1.begin(), 10);

    // inserting a set of elements to the list
    it = l1.insert_after(it, { 2, 3, 5 });

    // The function is similar to the insert()
    // function
    it = l1.emplace_after(it, 40);

    // Removes all elements from it till end()
    it = l1.erase_after(it, l1.end());

    // Displays the elements in the forward_list
    for (int x : l1)
        cout << x << " "; //15 10 2 3 5 40

    return 0;
}

/* ************************************************************************************************ /
clear(): This function is used to remove all the elements of the forward list container, thus making its size 0.
Syntax:
forwardlistname.clear()
Parameters: No parameters are passed.
Result: All the elements of the forward list are removed (or destroyed)
Examples:
Input  : flist{1, 2, 3, 4, 5};
         flist.clear();
Output : flist{}

Input  : flist{};
         flist.clear();
Output : flist{}
---------------------------------------------------------------------------
empty(): This function returns a boolean value indicating whether the forward_list is empty, i.e. whether its size is 0 or not. Syntax:
forwardlistname.empty()
Parameters: No parameters are passed.
Returns: True, if the list is empty else false.
Examples:
Input  : forward_list forwardlist{1, 2, 3, 4, 5};

         forwardlist.empty();

Output : False



Input  : forward_list forwardlist{};

         forwardlist.empty();

Output : True

-------------------------------------------------------------------------------------
reverse(): This is an inbuilt function in CPP STL which reverses the order of the elements present in the forward_list.
Syntax:
forwardlist_name.reverse()
Parameter: The function does not accept any parameter.
Return value: The function has no return value. It reverses the forward list.
Example:
Input  : forward_list l = {10, 20, 30};
         l.reverse();

Output : {30, 20, 10}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
merge(): This is an inbuilt function in C++ STL which merges two sorted forward_lists into one. This function merges the second list into the first, thus emptying the second list.
The merge() function can be used in two ways:
Merge two forward lists that are sorted in ascending order into one.

Merge two forward lists into one using a comparison function.
Syntax:
forwardlist_name1.merge(forward_list& forwardlist_name2)
                  or
forwardlist_name1.merge(forward_list& forwardlist_name2,
                        Compare comp)

Parameters: The function accepts two parameters which are specified as below:
forwardlist_name2 – Another forward list of the same type which is to be merged
comp – A comparison function which should return true or false.

Return value: The function does not return anything.

Example:
Input : forward_list l1 = {10, 20, 30};
        forward_list l2 = {5, 15};

Operation : l1.merge(l2)

Output : l1 = {5, 10, 15, 20, 30}
         l2 = {}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

sort(): This function is used to sort the elements of the container by changing their positions.
Syntax:
forwardlistname.sort()

Parameters: No parameters are passed.
Result: The elements of the container are sorted in ascending order.
Examples:
Input  : forward_list l1 = {5, 15, 10};

         l1.sort();

Output : {5, 10, 15}



Input  : myflist{"This", "is", "Geeksforgeeks"};

         myflist.sort();

Output : Geekforgeeks, This, is
=====================================================================================================================================
Note: There is another variation of merge() function where it can take a parameter to determine the order of sorting the forward_list.
=====================================================================================================================================
Time Complexities: Here are the time complexities of few important functions implemented over a forward_list.
insert_after(): To insert one element it takes O(1) time and to insert m elements, it will take O(m) time.

erase_after(): To erase one element it takes O(1) time and to erase m elements, it will take O(m) time.

push_front(): This takes O(1) time.

pop_front(): This takes O(1) time.

reverse(): This takes O(n) time.

sort(): This takes O(nlogn) time.

remove(): This takes O(n) time.

assign(): To assign one element it takes O(1) time and to assign m elements, it will take O(m) time.
***************************************************************************************************************************************** */

