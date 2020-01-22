
#include <bits/stdc++.h>
using namespace std;

class Array {
public:
    int n;
    int* ref;

    Array(int n)
        : n(n)
    {
        ref = new int[n];

        for (int i = 0; i < n; i++)
            *(ref + i) = i;
    }

    // copy-contructor definition
    Array(const Array& obj)
        : n(obj.n)
    {
        ref = new int[n];

        for (int i = 0; i < n; i++)
            *(ref + i) = *(obj.ref + i);
    }
};

int main()
{
    Array arr1(10);

    // copy constructor called
    // at this point
    Array arr2 = arr1;

    // changing n-value in 2nd instance
    arr2.n = 5;

    // changing array-values in 2nd instance
    for (int i = 0; i < 10; i++)
        *(arr2.ref + i) *= 2;

    cout << "n-value of 1st instance: " << arr1.n << endl; //10
    cout << "Array values of 1st instance:\n";
    for (int i = 0; i < 10; i++)
        cout << *(arr1.ref + i) << " ";  //0 1 2 3 4 5 6 7 8 9
    cout << endl;
    
    cout << "n-value of 1st instance: " << arr2.n << endl; //5
    cout << "Array values of 1st instance:\n";
    for (int i = 0; i < 10; i++)
        cout << *(arr2.ref + i) << " ";  //0 2 4 6 8 10 12 14 16 18 
    cout << endl;

    return 0;
}
//We can see that in our copy-constructor, we re-create a dynamic memory for the array and then copy the values. This results in a deep-copy.
//Meaning changes in arr2 doesn't affect arr1.
//*******************************************************************//
//To return reference to the calling object
//////////////////////////////////////////////////////////////////////
/* Reference to the calling object can be returned */ 
Test& Test::func ()
{
   // Some processing
   return *this;
} 
////////////////////////////////////////////////////////////////////////////
//When a reference to a local object is returned,
//the returned reference can be used to chain function calls on a single object.
/***************************************************************************//

#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
        string id, name;
        int years;
        
    public:
        Employee setId(string id) { 
            this->id = id; 
            return *this;
        }
        
        Employee setName(string name) { 
            this->name = name; 
            return *this;
        }
        
        Employee setYears(int years) { 
            this->years = years; 
            return *this;
        }
        
        void printDetails() {
            cout << "ID: " << id
                 << ", Name: " << name
                 << ", Experience: " << years;
        }
};

int main()
{
    Employee emp;
    
    emp.setId("GFG123").setName("John").setYears(4).printDetails();
    //ID: GFG123, Name: John, Experience: 4
    
    return 0;
}
//////////////////////////////////////////////////////////////////////////
//In the above code, each time we call the setter methods, the employee instance we are referring to is returned using the 'this' pointer. 
//We can thus re-use this instance to chain more method calls.