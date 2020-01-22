/************************************************************************************************************************************************************************************************************************/
//Important Operations in Iterators:
//***********************************
//next(): This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.
//prev(): This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.
/************************************************************************************************************************************************************************************************************************/

// CPP program illustrating
// iterators
#include <iostream>
#include <vector>
using namespace std;

// Driver Method
int main()
{
    // Sample vector container
    vector<int> v = { 10, 20, 30, 40, 50 };

    // Creating an iterator
    // auto i; -> this can also be used to
    // avoid the long statement
    // i points to the first element 10
    vector<int>::iterator i = v.begin();
    cout<<(*i)<<" "; //10
    
    // Points to next value 20
    // By default next() moves one position
    // ahead
    i = next(i);

    // Prints the value 20
    cout << (*i) << " "; //20

    // Moves i two positions ahead
    // pointing to 40
    i = next(i, 2); 

    // Prints the value 40
    cout << (*i) << " "; //40

    // Moves back one position
    // Pointing to 30
    i = prev(i);

    // Prints the value 30
    cout << (*i) << " "; //30
    return 0;
}
