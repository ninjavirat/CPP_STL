
#include <bits/stdc++.h>
using namespace std;

class Test {
    public:
        static int x;
};

/*static members need to be
defined outside the class*/
int Test::x = 1;

int main()
{
    Test t1, t2;
    
    cout << "Access from instance: " << t1.x << endl//1
         << "Access from Class: " << Test::x << endl;//1
         
    Test::x = 5;
    
    cout << "t1.x: " << t1.x << endl //5
         << "t2.x: " << t2.x << endl //5
         << "Test::x: " << Test::x << endl; //5
    
    return 0;
}
/******************************************************************************************************************/
//we can't directly initialize a static data-member along with the declaration.
//i.e. static int x = 1; is reported as a compilation error. We must explicitly initialize it outside the class.
//Another thing to note is that this initializer statement works regardless of whether we declare the static variable as public, private or protected.
/******************************************************************************************************************/
