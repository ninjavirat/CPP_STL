
#include <bits/stdc++.h>
using namespace std;

class Math
{
    public:
        //Overloaded add() methods
        static int add(int x, int y) { return x + y; }
        static void add(int a[], int b[], int sum[], int n) {
            for (int i=0;i<n;i++)
                //use the 1st form to get addition of 
                //two numbers
                sum[i] = add(a[i], b[i]);
        }
        
        //Overloaded mul() methods
        static int mul(int x, int y) { return x * y; }
        static void mul(int a[], int b[], int prod[], int n) {
            for (int i=0;i<n;i++)
                //use the 2nd form to get product
                //of two numbers
                prod[i] = mul(a[i], b[i]);
        }
};

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {9, 8, 7, 6, 5};
    int sum[5], prod[5];
    
    Math::add(a, b, sum, 5);
    Math::mul(a, b, prod, 5);
    
    for (int i=0; i<5; i++)
        cout << sum[i] << " "; //10 10 10 10 10 
    cout << endl;
    
    for (int i=0; i<5; i++)
        cout << prod[i] << " "; //9 16 21 24 25 
    cout << endl;
    
    return 0;
}

//*************************************************************************************************************

#include <bits/stdc++.h>
using namespace std;

class Math
{
    public:
        //Overloaded add() methods
        static int add(int x, int y) { 
            cout << "1st form called: "; 
            return x + y; 
        }
        
        static double add(int x, double y) { 
            cout << "2nd form called: "; 
            return x + y; 
        }
        
        static double add(double x, double y) { 
            cout << "3rd form called: "; 
            return x + y; 
        }
};

int main()
{
    cout << Math::add(2, 3) << endl; //5
    cout << Math::add(2, 3.0) << endl; //5
    cout << Math::add(2.0, 3.0) << endl;//5
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//NOTE: Return-type is not a factor of uniqueness: 
//Having the list of arguments identical with different return-types doesn't remove ambiguity. 
//Hence, the following declarations are invalid:
//int add(int x, int y) { ... }
//double add(int x, int y) { ... }
////////////////////////////////////////////////////////////////////////////////////////////////////////
