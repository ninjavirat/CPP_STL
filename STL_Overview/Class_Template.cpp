                                                  
/*****************************************************************************************************************************************************************************************************************************************/
// A Class Template also follows the trend of writing code once and using it for various data types. Examples of class templates are,
//a Stack class can be created that might be used as integer stack, float class etc.
//It can also be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc. Like function templates, class templates are useful when a class defines something that is independent of the data type.
/*****************************************************************************************************************************************************************************************************************************************/


// C++ program to illustrate
// Class Templates
#include <iostream>
using namespace std;

// T is the variable and
// can be extended to multiple types
template <typename T>

// A structure can also be used
// instead of a class as it has
// public access type
struct Pair {

    // These pairs can be of any type
    T x, y;

    // Constructor accpecting both
    // parameters of same type
    Pair(T i, T j)
    {
        x = i;
        y = j;
    }

    // Function of T type
    T getFirst()
    {
        return x;
    }

    // Function of T type
    T getSecond()
    {
        return y;
    }
};

// Drivers Method
int main()
{

    // Pair needed to be passed
    Pair<int> p1(10, 20);
    cout << p1.getFirst() << " " //10
         << p1.getSecond();      //20
    return 0;
}
/**************************************************************************************************************************************/
//Working: 
//When the object of the class or structure Pair is created then all the T's in the class gets replaced with the data type parameter that is passed into the template.
/********************************************************************************************************************************************************/


struct Pair {

    // These pairs can be of any type
    int x, y;

    // Constructor accpecting both
    // parameters of same type
    Pair(int i, int j)
    {
        x = i;
        y = j;
    }

    // Function of T type
    int getFirst()
    {
        return x;
    }

    // Function of T type
    int getSecond()
    {
        return y;
    }
};
/*********************************************************************************************************************************/
//The functions that are created inside the class can also be created outside the class with a reference to the class. This can be done in the following way.
//*******************************************************************************************************************************************************************************/


// C++ program to illustrate
// Class Templates
#include <iostream>
using namespace std;

// T is the variable and
// can be extended to multiple types
template <typename T>

// A structure can also be used
// instead of a class as it has
// public access type
struct Pair {

    // These pairs can be of any type
    T x, y;

    // Constructor accpecting both
    // parameters of same type
    Pair(T i, T j)
    {
        x = i;
        y = j;
    }

    // Function of T type
    T getFirst();

    // Function of T type
    T getSecond()
    {
        return y;
    }
};

template <typename T>

Pair<T>::getFirst()
{
    return x;
}

// Drivers Method
int main()
{

    // Pair needed to be passed
    Pair<int> p1(10, 20);
    cout << p1.getFirst() << " " //10
         << p1.getSecond(); //20
    return 0;
}
/*****************************************************************************************************************************************/

