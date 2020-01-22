
/************************************************************************************************************************************************************************************************************************/
/*advance(): This function is used to increment the iterator position until the specified number mentioned in its arguments is met. It simply modifies the existing value of the iterator with the given value.          /                                            
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

    // Modifies the iterator from 0 to 3
    advance(i, 3);
    cout << (*i) << " "; //40
    
    i++; //incrementing the iterator
    cout << (*i) << " "; //50
    
    return 0;
}
