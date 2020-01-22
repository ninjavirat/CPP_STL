/**************************************************************************************** /
WAP for the implementation of PriorityQueue along with various 
******************************************************************************************/
// CPP code to illustrate
// priorit_queue and its
// various function
#include <iostream>
#include <queue>
using namespace std;

// Drivers Method
int main()
{

    // Creating a priority queue
    priority_queue<int> pq;

    // Pushing elements into
    // the priority_queue
    pq.push(10);
    pq.push(15);
    pq.push(5);

    // Displaying the size of
    // the queue
    cout << pq.size() << " "; //3

    // Displaying the top elements
    // of the queue
    cout << pq.top() << " "; //15

    while (pq.empty() == false) {
        cout << pq.top() << " "; //15 10 5
        pq.pop();
    }
    return 0;
}

/**************************************************************************************** /
Parameters: In the syntax, the int represents the data type of the elements of the priority queue. We have also passed a vector
which is used by the priority_queue as an underlined container. The priority_queue uses the concept of Heap but it is built on vector or a dynamic array as a base.
Here the greater() function has been used to revere the order of the Heap. This converts the MAX_HEAP into a MIN_HEAP.
==================================================================================
******************************************************************************************/
// CPP code to illustrate
// priority_queue with MIN_HEAP
#include <iostream>
#include <queue>
using namespace std;

// Drivers Method
int main()
{

    // Creating a priority queue
    priority_queue<int, vector<int>,
                   greater<int> >
        pq;

    // Pushing elements into
    // the priority_queue
    pq.push(10);
    pq.push(15);
    pq.push(5);

    // Displaying th e size of
    // the queue
    cout << pq.size() << " "; //3

    // Displaying the top elements
    // of the queue
    cout << pq.top() << " "; //5

    while (pq.empty() == false) {
        cout << pq.top() << " "; //5 10 15
        pq.pop();
    }
    return 0;
}

/**************************************************************************************** /
Program 3: Implementing priority queue with an existing vector or an array.
****************************************************************************
Syntax:
------
priority_queue pq;
pq(begin_iterator, last_iterator);
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Parameters: Here begin_iterator and last_iterator refers to the first and the last position of the array respectively. Here the last position refers to the index beyond the last element.
/****************************************************************************************************************************************************************************************/


// CPP code to illustrate
// priority_queue
#include <iostream>
#include <queue>
using namespace std;

// Drivers Method
int main()
{
    // Sample array
    int arr[] = { 10, 5, 15 };

    // Creating priority_queue
    // out of the array
    priority_queue<int> pq(arr, arr + 3);

    // Displaying the priority_queue
    while (pq.empty() == false) {
        cout << pq.top() << " ";  //15 10 5
        pq.pop();
    }
}
/**************************************************************************************** /
Time Complexities:
------------------
top(): O(1) as the top element can be accessed directly in constant time.
empty(): O(1) as the checking can be done in constant time.
push(): O(logn)
pop(): O(logn)
Time Complexity: O(n)
******************************************************************************************/
/**************************************************************************************** /
Program 4: Alternate way to create a MIN_HEAP using a simple method. 
The trick lies in converting all the array elements into its negative counterpart.
This code uses the syntax of MAX_HEAP but the effect is seen that of MIN_HEAP.
******************************************************************************************/

// CPP code to illustrate
// priority_queue and MIN_HEAP
#include <iostream>
#include <queue>
using namespace std;

// Drivers Method
int main()
{
    // Sample array
    int arr[] = { 10, 5, 15 };
    int n = 3;

    // Multiplying the array elements
    // with -1
    for (int i = 0; i < n; i++)
        arr[i] = -arr[i];

    // Creating priority_queue
    // out of the array
    priority_queue<int> pq(arr, arr + 3);

    // Displaying the priority_queue
    while (pq.empty() == false) {
        cout << (-pq.top()) << " "; //5 10 15
        pq.pop();
    }
}
/*********************************************************************************************************
Program 5: Taking the age and height of a person as a structure,
write a program to create a priority queue of persons 
such that all the person can be traversed in decreasing order of heights.
************************************************************************************************************/
// CPP code to illustrate
// priorit_queue and its
// various function
#include <iostream>
#include <queue>
using namespace std;
struct Person {   
	int age;    
	float ht;      
	Person(int a, float h) 
	{        
		age = a;       
		ht = h;   
	}
}; 
struct myCmp {   
	bool operator()(Person const& p1, Person const& p2)
	 {       
		p1.ht < p2.ht;   
	 }
}; 
	 
// Drivers Method
int main(){    
	// Creating a priority queue  
	priority_queue<Person, vector<Person>, myCmp> pq; 
	// Pushing elements into    
	// the priority_queue   
	// First Person  
	Person p1(21, 5);  
	pq.push(p1);       
	// Second Person    
	Person p2(22, 6);   
	pq.push(p2);       
	// Third Person   
	Person p3(23, 7);  
	pq.push(p3);     
	// Displaying the top elements  
	// of the queue   
	while (pq.empty() == false) {       
		cout << pq.top().ht << " ";      //5
		pq.pop(); 
	}   
	return 0;
}
/*********************************************************************************/
// Applications: The priority_queue can be used in various standard algorithms like,
// Dijkstra's Algorithm
// Prims Algorithm
// Huffman Algorithm
// Heap Sort

/***********************************************************************************/
//Given an array arrange them in an increasing order using the priority_queue.
/*************************************************************************************/
// Program to sort the array 
// using priority_queue
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // The array to sort
    int arr[] = {1, 3, 7, 2, 4};
    
    // Size of the array
    int n = 5;
    
    // Creating the priority_queue
    priority_queue<int>pq(arr, arr+n);
    int i = n - 1;
    int x;
    
    // Sorting the elements
    while(i >= 0)
    {
        arr[i] = pq.top(); 
        pq.pop();
        i--;
    }
    
    // Displaying the array
    for(int i=0; i<n;i++)
        cout<<arr[i]<<" "; //1 2 3 4 7 
}
/************************************************************************************/
/***********************************************************************************/
//Time complexity: Time taken in Step1 is O(N) because constructing heap from a given array or vector take O(N) time.
//Removing an element from the top of the heap takes O(logN) time since we are performing this N times, thus the overall time taken in removing and storing in an array takes O(NlogN).
/*************************************************************************************/

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 Program to find the K-th largest element:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include<bits/stdc++.h>
using namespace std;

// Function to find the k-th largest element
int find_kth_largest(int arr[], int n, int k)
{
    
    // Creating the priority_queue out
    priority_queue<int> pq(arr, arr+n);
    int x;
    
    // Finding the k-th largest element
    while (k > 0)
    {
        x = pq.top(); pq.pop();
        k--;
    }
    return x;
}

// Driving code
int main()
{
    // Base array
    int arr[] = {1, 9, 7, 2, 4};
    
    // Size and value of k
    int n = 5, k = 3;
    
    // Calling function to get the k-th largest
    // element
    int ans = find_kth_largest(arr, n, k);
    
    // Displaying the k-th largest element
    cout << ans; //4
    return 0;
}


// Program to find the K-th largest element
#include<bits/stdc++.h>
using namespace std;

// Function to find the k-th largest element
int find_kth_largest(int arr[], int n, int k)
{
    
    // Creating the priority_queue out
    priority_queue<int> pq(arr, arr+n);
    int x;
    
    // Finding the k-th largest element
    while (k > 0)
    {
        x = pq.top(); pq.pop();
        k--;
    }
    return x;
}

// Driving code
int main()
{
    // Base array
    int arr[] = {1, 9, 7, 2, 4};
    
    // Size and value of k
    int n = 5, k = 3;
    
    // Calling function to get the k-th largest
    // element
    int ans = find_kth_largest(arr, n, k);
    
    // Displaying the k-th largest element
    cout << ans; //4
    return 0;
}

/**************************************************************************************************************************
Time complexity: Time taken in Step1 is O(N) because constructing heap from a given array or vector take O(N) time. Removing an element from the top of the heap in Step2 takes O(logN) time and since we are performing this K-times, the overall time taken will be O(KlogN) times. In the worst case, this would be similar to O(NlogN) times.
****************************************************************************************************************************/

/**************************************************************************************************************************
Problem: Given an array of size n and a value k, the task is to find k numbers with most occurrences.
If there are similar occurrences, then the priority will be given to the lesser number in the number line.
****************************************************************************************************************************/
/*  Input: arr[] = {3, 1, 4 , 4, 5, 2, 6, 1}
        n = 8
        k = 2
    Output: 1 4
    Explanation: As 1 and 4 occurs 2 times
    
    Input: arr[] = {1, 1, 4, 4}
            n = 8
            k = 1
    Output: 1
    Explanation: Although both 1 and 4 occurs 2 times, 
    but priority would be given to the lesser number
    which is 1 in this case.
    ===============================================================================================
    
    Approach: We will be using the concept of Unordered Map, Vector and Priority Queue to solve this problem efficiently. The logic is to find the number of times each element is appearing in the given array and storing them in an unordered_map. Now create a Vector of pair out of this unordered_map by assigning the value as the first element of the pair and the frequency of it occurring as the second. Next, we need to convert this Vector pair into a priority_queue and store them in a MAX_HEAP wherein the arrangements would be done based on the frequency of occurrences. We will also be using a compare function,
    that would solve the problem of similar occurrences and would help with the arrangement of the queue in a prioritized manner where the lesser number will be given a priority when it shares the same frequency with another number. Finally, pop the element k times to get the k most frequent elements in the array.
/****************************************************************************************************************************/
/*Step 1: Create an unordered_map.

Step 2: Store in the unordered_map the elements and their frequency. For an array {3, 1, 4 , 4, 5, 2, 6, 1} and k = 2, the unordered map will look like this:
Number	Frequency
1	2
3	1
2	1
4	2
5	1
6	1
Step 3: Create a vector pair and assign the numbers to the first element of the pair and the frequency of the number to the next element. The Vector_pair out of the above-mentioned unordered_map will look like this:
(1, 2), (3, 1), (2, 1), (4, 2), (5, 1), (6, 1)

Step 4: Convert the vector pair into the priority queue with each index of the queue storing the number and their frequency of occurrence. Here the MAX_HEAP is sorted in a decreasing manner based on the frequency.

Step 5: A compare function will be used to prioritize two pairs when they have the same frequency and priority needs to be given to the lesser element as in Example 2. If the frequency does not match then the queue will be arranged according to the frequency.

Step 6: Run a loop k-times through the priority_queue to find the k most frequent numbers occurring in the array.
*/
/********************************************************************************************************************************************************************************************************************************************************/
// C++ program to find the k-most frequent number.
#include <bits/stdc++.h>
using namespace std;

// Compare method to arrange the priority_queue
// according to the frequency or lesser value
// in case the frequency of two pair matches.
struct compare {
    bool operator()(pair<int, int> p1,
                    pair<int, int> p2)
    {
        // if the frequency matches
        // return the lesser value
        if (p1.second == p2.second)
            return p1.first > p2.first;
        else
            return p1.second < p2.second;
    }
};

// Method to find the k-most frequent number
void k_most_frequent(int arr[], int n, int k)
{
    // Create an unordered_map
    unordered_map<int, int> mp;

    // Store the numbers
    // and frequency of occurrence
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Creating the vector pairs
    vector<pair<int, int> > freq(mp.begin(),
                                 mp.end());

    // priority_queue storing the vector pairs
    // on the basis of frequency
    priority_queue<pair<int, int>,
                   vector<pair<int, int> >, compare>
        pq(freq.begin(), freq.end());

    // Popping k-times to get the
    // k-most frequent numbers
    for (int i = 0; i < k; i++) {

        // Displaying the first element of
        // the pair corresponding to the most
        // frequently appeared element
        cout << pq.top().first << " ";
        pq.pop();
    }
}

// Driver Method
int main()
{
    // Base array
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };

    // Value of k and n
    int k = 2, n = 8;

    // Calling the k_most_frequent method
    k_most_frequent(arr, 8, 2); //1 4
    return 0;
}
