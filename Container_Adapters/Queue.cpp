/**************************************************************************************** /
WAP program to Implement the Queue Datastructure:
******************************************************************************************/

// C++ program to illustrate Queue in STL

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Creating a Queue using STL
    queue<int> q;
    
    // The push function inserts elements
    // at the end of Queue
    q.push(10);
    q.push(20);
    q.push(30);
    
    // After above operations, Queue will 
    // look like:
    //     ****** 
    //     * 30 * <- Queue's rear end
    //     * 20 *
    //     * 10 * <- Queue's front
    //     ******
    
    // This will print the current size 
    // of queue which is 3
    cout<<q.size()<<endl; //3
    
    // This will print the front and back elements 
    // of the queue which are 10 and 30
    
    cout<<q.front()<<" "<<q.back()<<endl; //10 30
    
    // This will delete the front element 
    // of the Queue
    q.pop();
    
    // This will again print the front and back  
    // elements of the queue which are 20 and 30
    
    cout<<q.front()<<" "<<q.back()<<endl; //20 30
    
    return 0;
}


/**************************************************************************************** /
Queue Traversal:
----------------
We cannot access queue elements randomly as they are not stored at contigous memory locations. 
Hence, we cannot use loops or iterators to traverse queues.
However, in some cases, if we want to remove a few elements from a queue or empty a queue.
we can do that by using some built-in functions we discussed above.
==================================================================================
The idea is:
------------
While, queue is not empty, i.e., there are some elements in the queue.
    Print the front element.
    Pop the front element.
Repeat the above 2 steps until queue is not empty.
******************************************************************************************/

// C++ program to illustrate Queue traversal

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Creating a Queue using STL
    queue<int> q;
    
    // The push function inserts elements
    // at the rear end of Queue
    q.push(10);
    q.push(20);
    q.push(30);
    
    // After above operations, queue will 
    // look like:
    //     ******    
    //     * 30 *  <- Queue's rear end
    //     * 20 *
    //     * 10 *  <- Queue's front
    //     ******
    
    // While Queue is not empty
    while(!q.empty())
    {
        // Print front and back elements
        cout<<q.front()<<" "<<q.back()<<endl;
        
        // Pop top element
        q.pop();
    }
    
    return 0;
}

/*OUTPUT:
10 30
20 30
30 30
*/
/**************************************************************************************** /
Time Complexities and Internal Working:
--------------------------------------
push()    -----
pop()     -----  \
front()   -----    ---  O(1) Time Complexity.
back()    
size()    -----  /
empty()   -----

******************************************************************************************************************************************************************/
/* Given a number n, print first n numbers in increasing order such that all these numbers have digits in set {5, 6}:
===================================================================================================================== 
Examples:
--------
Input : n = 10

Output : 5, 6, 55, 56, 65, 66, 555,

         556, 565, 566

Input : n = 4
Output : 5, 6, 55, 56
Note: n can be a big number and the result values might not fit in basic data types like long int or long long int.

/*****************************************************************************************************************************************************************/

// CPP program to generate n number
// using digits 5 and 6
#include <iostream>
#include <queue>
using namespace std;

// Function to generate numbers
void printFirstN(int n)
{
    // Sample queue
    queue<string> q;

    // Pushing elements 5 and 6 to
    // the queue
    q.push("5");
    q.push("6");

    // for loop to generate n numbers
    for (int count = 0; count < n; count++) {
        // Getting the root node
        string curr = q.front();

        // Displaying the number
        cout << curr << " ";

        // Popping out the element
        q.pop();

        // Pushing element by appending 5
        // on left side
        q.push(curr + "5");

        // Pushing element by appending 6
        // on right side
        q.push(curr + "6");
    }
}

// Driver Method
int main()
{
    int n = 5;
    printFirstN(n); //5 6 55 56 65
    return 0;
}

/**************************************************************************************** /
Working of the Loop for n = 5
-----------------------------
When count = 0,
q -> 5, 6
curr = 5
Print: 5
q -> 6, 55, 56


When count = 1,
q -> 6, 55, 56
curr = 6
Print: 5 6
q -> 55, 56, 65, 66


When count = 2,
q -> 55, 56, 65, 66
curr = 55
Print: 5 6 55
q -> 56, 65, 66, 555, 556


When count = 3,
q -> 56, 65, 66, 555, 556
curr = 56
Print: 5 6 55 56
q -> 65, 66, 555, 556, 565, 566


When count = 4,
q -> 65, 66, 555, 556, 565, 566
curr = 65
Print: 5 6 55 56 65
q -> 66, 555, 556, 565, 566, 655, 656

Time Complexity: O(n)
******************************************************************************************/
