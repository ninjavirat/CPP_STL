
#include <bits/stdc++.h>
using namespace std;

class Test {
    private:
        static int x;
        
    public:
        //set private static integer x
        static void setX(int x) { Test::x = x; }
        
        //get private static integer x
        static int getX() { return x; }
};

//Initializer statement is valid
//even though variable is declared
//private
int Test::x = 1;

int main()
{
    Test::setX(5);
    cout << Test::getX();  //5
    
    return 0;
}

//************************************************************************************************************************//
//Static member-functions can't access non-static data-members.
//Static member-functions can't access other non-static member-functions.
//Static member-functions have no *this pointer, as it is not associated with any particular instance.
//There is no concept of a static constructor.
//Static member-functions are useful for accessing static data-members which are not declared public.
//************************************************************************************************************************//