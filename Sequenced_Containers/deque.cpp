/**************************************************************************************** /
(Deque) or Doubly ended queues are sequence containers with the feature of expansion and contraction on both the ends.
-------------------------------------------------------------------------------------------------------
Unlike, Queues or Stacks, Deques allows us to perform insertion and deletion at both ends.
Syntex:
-------
deque<Type of Elements> deque_name;
******************************************************************************************/
//Creating a Deque and some important functions:

#include <deque>
#include <iostream>

using namespace std;

int main()
{
    // Creates an empty Deque
    deque<int> dq;

    // Push element at back
    dq.push_back(10); //10

    // Push element at front
    dq.push_front(20); //20 10 

    // The Deque is: 20 10

    // Access front and back elements
    // of the Deque
    cout << "dq.front() : " << dq.front(); //20 
    cout << "\ndq.back() : " << dq.back(); //10

    return 0;
}

/**************************************************************************************** /
Traversing a Deque:
-------------------
We can traverse a deque, just like we traverse a vector. That is, using for loops, for each loop, or even using iterators.

Below programs create a Deque and traverse the Deque using foreach loop.

************************************/

#include <deque>
#include <iostream>

using namespace std;

int main()
{
    // Creates and initializes the
    // Deque at the same time
    deque<int> dq = { 10, 20, 30, 40, 50 };

    // Traversing the Deque using
    // foreach loop
    cout << "Deque : ";
    for (auto x : dq)   //10, 20, 30, 40, 50 
        cout << x << " ";

    return 0;
}


/**************************************************************************************** /
deque::begin() and deque::end in C++ STL: begin() function is used to return an iterator pointing to the first element of the deque container. end() function is used to return an iterator pointing to the last element of the deque container.
----------------------------------------------------------------------------------------------------------------------------------------
deque insert() function in C++ STL: Inserts an element. And returns an iterator that points to the first of the newly inserted elements. We can also insert multiple elements using insert() function in Deque. Learn about insert() in Deque in details here.
----------------------------------------------------------------------------------------------------------------------------------------
deque::pop_front() and deque::pop_back() in C++ STL: pop_front() function is used to pop or remove elements from a deque from the front. pop_back() function is used to pop or remove elements from a deque from the back.
----------------------------------------------------------------------------------------------------------------------------------------
deque::empty() and deque::size() in C++ STL: empty() function is used to check if the deque container is empty or not. size() function is used to return the size of the deque container or the number of elements in the deque container.
----------------------------------------------------------------------------------------------------------------------------------------
deque::clear() and deque::erase() in C++ STL: The clear() function is used to remove all the elements of the deque container, thus making its size 0. The erase() function is used to remove elements from a container from the specified position or range.

******************************************************************************************/

#include <deque>
#include <iostream>

using namespace std;

int main()
{
    // Creates and initializes the
    // Deque with following elements
    deque<int> dq = { 10, 15, 30, 5, 12 };

    // Get the iterator to the first element
    // of the Deque
    auto it = dq.begin();

    // Increment iterator to second element
    it++;

    // Insert an element 20 at position
    // pointed by 2, that is, second position
    dq.insert(it, 20);

    // Deque now wil be: 10, 20, 15, 30, 5, 12

    // Pop front and back elements
    dq.pop_front();
    dq.pop_back();

    // Deque now is: 20, 15, 30, 5

    // Print current size of Deque
    cout << "Deque Size: " << dq.size() << endl; //4

    // Print element pointed by iterator it
    cout << "Iterator it points to: " << (*it) << "\n"; //15

    // Insert 3 two times starting from
    // position pointed by "it" which is
    // second position
    it = dq.insert(it, 2, 3);

    // Print elements of Deque using random
    // access
    cout << "Curret Deque: ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";    // 20 3 3 15 30 5
    cout << endl;

    return 0;
}


/*-----------------------------------------------------------------------------------/
Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.
-------------------------------------------------------------------------------------*/

#include <deque>
#include <iostream>

using namespace std;

// A Dequeue (Double ended queue) based method for 
// printing maximum element of all subarrays of size k
void printKMax(int arr[], int n, int k)
{
    // Create a Double Ended Queue, Q1 that will store indexes of array elements
    // The queue will store indexes of useful elements in every window and it will
    // maintain decreasing order of values from front to rear in Q1, i.e.,
    // arr[Q1.front[]] to arr[Q1.rear()] are sorted in decreasing order
    deque<int> Q1(k);

    /* Process first k (or first window) elements of array */
    int i;
    for (i = 0; i < k; ++i) {
        // For every element, the previous smaller
        // elements are useless so remove them from Qi
        while ((!Q1.empty()) && arr[i] >= arr[Q1.back()])
            Q1.pop_back(); // Remove from rear

        // Add new element at rear of queue
        Q1.push_back(i);
    }

    // Process rest of the elements, i.e., 
    // from arr[k] to arr[n-1]
    for (; i < n; ++i) {
        // The element at the front of the queue is the 
        // largest element of previous window, so print it
        cout << arr[Q1.front()] << " ";

        // Remove the elements which are out of this window
        while ((!Q1.empty()) && Q1.front() <= i - k)
            Q1.pop_front(); // Remove from front of queue

        // Remove all elements smaller than the currently
        // being added element (remove useless elements)
        while ((!Q1.empty()) && arr[i] >= arr[Q1.back()])
            Q1.pop_back();

        // Add current element at the rear of Qi
        Q1.push_back(i);
    }

    // Print the maximum element of last window
    cout << arr[Q1.front()];
}

// Driver Code
int main()
{
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printKMax(arr, n, k); //3 3 4 5 5 5 6

    return 0;
}
/************************************************************************************************************** /
Time Complexity: O(n). It seems more than O(n) at first look. If we take a closer look, we can observe that every element of the array is added and removed at most once. So there are total 2*n operations.
Auxiliary Space: O(k)
****************************************************************************************************************/
