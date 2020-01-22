/**************************************************************************************** /
Stack is a linear data structure where elements are inserted in the LIFO order.
LIFO stands for Last In First Out, which means that the last element to be inserted in the stack will be the first one to be removed.
******************************************************************************************/
/
// C++ program to illustrate Stack in STL

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // Creating a Stack using STL
    stack<int> s;
    
    // The push function inserts elements
    // at the top of Stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    // After above operations, stack will 
    // look like:
    //     ******    
    //     * 30 *  <- Stack TOP
    //     * 20 *
    //     * 10 *
    //     ******
    
    // This will print the current size 
    // of stack which is 3
    cout<<s.size()<<endl; //3
    
    // This will print the top element 
    // of stack which is 30
    cout<<s.top()<<endl; //30
    
    // This will delete the top element 
    // of the stack
    s.pop();
    
    // This will print the top element 
    // of stack which is 20
    cout<<s.top(); //20
}


/**************************************************************************************** /
Stack Traversal
************************************/


// C++ program to illustrate Stack traversal

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // Creating a Stack using STL
    stack<int> s;
    
    // The push function inserts elements
    // at the top of Stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    // After above operations, stack will 
    // look like:
    //     ******    
    //     * 30 *  <- Stack TOP
    //     * 20 *
    //     * 10 *
    //     ******
    
    // While stack is not empty
    while(!s.empty())
    {
        // Print top element
        cout<<s.top()<<" "; //30 20 10
        
        // Pop top element
        s.pop();
    }
    
    return 0;
}
//Note: Elements in the above traversal will be printed in reverse order of their insertion.



/**************************************************************************************** /
Time Complexities and Internal Working:
---------------------------------------
push()    -----
pop()     -----  \
top()     -----    ---  O(1) Time Complexity.
size()    -----  /
empty()   -----
============================================================================
Container Adaptor: In C++ STL, container adaptor is a term used for containers that can be built upon other containers. That is, they can be implemented using other containers already available in C++ STL.
============================================================================================================================================================================================================
The stack is a container adaptor and can be implemented using any other container which supports below operations:
Inserting elements to the end.
Deleting elements from the end.
Returning size of the container.
Returning element from the end.
Checking if the container is empty.
******************************************************************************************/
/**************************************************************************************************************************************************************************************************
 * A Stack based C++ program to find next
 * greater element for all array elements.
 * -----------------------------------------------------------------------------------
 * Given an array, print the Next Greater Element(NGE) for every element.
 * The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider next greater element as -1.
   ==================================================================================================================================================================================================================================================================================================================
 *Input: arr[] = {4, 5, 2, 25}
   Output:
   Element       NGE
   4      -->   5
   5      -->   25
   2      -->   25
   25     -->   -1

  Input: arr[] = {1, 2, 4, 8, 6, 10}
  Output:
  Element       NGE
   1      -->   2
   2      -->   4
   4      -->   8
   6      -->   10
   8      -->   10
   10     -->   -1
   -------------------------------
   Time Complexity: O(n)
***********************************************************************************************************************************************************************************************/
 


#include <bits/stdc++.h>
using namespace std;

// Prints element and NGE pair for all
// elements of arr[] of size n
void printNGE(int arr[], int n)
{
    stack<int> s;

    // Push the first element to stack
    s.push(arr[0]);

    // Iterate for rest of the elements
    for (int i = 1; i < n; i++) {

        if (s.empty()) {
            s.push(arr[i]);
            continue;
        }

        // if stack is not empty, then
        // pop an element from stack.
        // If the popped element is smaller
        // than next, then
        // a) print the pair
        // b) keep popping while elements are
        // smaller and stack is not empty
        while (
            s.empty() == false
            && s.top() < arr[i]) {
            cout << s.top() << " --> "
                 << arr[i] << endl;
            s.pop();
        }

        // Push next to stack so that we can
        // find next greater for it
        s.push(arr[i]);
    }

    // After iterating over the loop,
    // remaining elements in stack do
    // not have the next greater element,
    // so print -1 for them
    while (s.empty() == false) {
        cout << s.top() << " --> "
             << -1 << endl;
        s.pop();
    }
}

// Driver program to test above functions
int main()
{
    int arr[] = { 4, 5, 2, 25 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}

/*-----------------------------------------------------------------------------------/
// WAP to check whether the given  bracket sequence is balanced or not:
Input: string = "(())(())"
Output: 1

Input: string = "(()))"
Output: 0
-------------------------------------------------------------------------------------
Time complexity: O(N)

Auxiliary space: O(N)
-------------------------------------------------------------------------------------*/


// Program to check whether the given 
// bracket sequence is balanced or not.
#include<bits/stdc++.h>
using namespace std;

// Function to check the balance
bool isBalanced(string str)
{
    // Creating a stack
    stack<char> st;
    
    // Iterating through the string
    // of braces 
    for(int i = 0; i < str.length(); i++)
    {
        // Pusing the elements into stack
        if(str[i] == '(')
            st.push(str[i]);
            
        // Popping the elements out
        else
        {
            if(st.empty())
                return 0;
            st.pop();
        }
    }
    
    // Checking the balance
    if(!st.empty())
        return 0;
    return 1;
}

// Drivers Method
int main()
{
    string bracSeq = "(())(())";
    cout << isBalanced(bracSeq); //1
    return 0;
}

/************************************************************************************************************** /
Reverse of string using stack:
------------------------------
Input: string = "GeeksQuiz"
Output: "ziuQskeeG"

Input: string = "Welcome to GFG"
Output: "GFG ot emocleW"


****************************************************************************************************************/

// Program to print the reverse of string
#include <bits/stdc++.h>
using namespace std;

// Function to perform the
// reverse operation
void reverse(string str)
{
    // Creating a stack of characters
    stack<char> st;

    // Pushing elements into the stack
    for (int i = 0; i < str.length(); i++)
        st.push(str[i]);

    // Popping elements from the top
    // to get the reverse order
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

// Driver Method
int main()
{
    // String to reverse
    string str = "GeeksQuiz"; //ziuQskeeG
    reverse(str);

    return 0;
}

/********************************************************************************************************************************************************************
 *  Problem: Given a string of expression, evaluate the eqivalent Postfix expression for it.
 *  =======================================================================================
 * Input: "231*+9-"
 * Output: -4
 *
 * Input: "570*+6-"
 * Output: -1
 * ========================================================================================
 * Approach:
 *
 *   Step 1: Create a Stack to store operands(values)
 *
 *   Step 2: Scan the given expression and do following for every scanned element.
 *
 *          a)If the element is a number, push it into the stack
 *
 *          b)If the element is an operator, pop operands for the operator from the stack. Evaluate the operator and push the result back to the stack.
 *   Step 3: When the expression ends, the number in the stack is the final answer
 * ***********************************************************************************************************************
 *Time complexity: The evaluation of algorithm takes O(n) time, where n is the number of characters in input expression.
*******************************************************************************************************************************************************************/
// Program to evaluate the
// postfix expression
#include <bits/stdc++.h>
using namespace std;

// Function to evaluate postfix
// expressions
int evaluatePostfix(string str)
{
    // Creating an empty stack
    stack<int> st;
    int n = str.length();

    // Traversing the string
    for (int i = 0; i < n; i++) {
        // Pushing elements into stack
        // if element is a number
        if (isdigit(str[i]))
            st.push(str[i] - '0');

        // Evaluation of the expression
        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char op = str[i];

            // Checking for the operators
            switch (op) {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}

// Drivers Method
int main()
{
    string str = "231*+9-";
    cout << evaluatePostfix(str) << endl; //4

    return 0;
}
/*************************************************************************************************************************************************************/