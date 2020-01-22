//Anonymous objects are created without assigning a reference to them. 
//Thus, they can be used only once (i.e. in the same statement only). e.g.
#include <bits/stdc++.h>
using namespace std;
  
class Math {
    public:
        int add(int x, int y) { return x + y; }
        int mul(int x, int y) { return x * y; }
};

int main() 
{
    cout << Math().add(5,6) << endl; //11
    cout << Math().mul(5,6) << endl; //30
    return 0; 
}
