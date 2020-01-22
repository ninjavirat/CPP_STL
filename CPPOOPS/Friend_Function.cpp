//***************************************************************************************************************************/
//Like a friend class, a friend function can be given special access to private and protected members. 
//A friend function can be:
//A Member Function of another class
/****************************************************************************************************************************/

#include <bits/stdc++.h>
using namespace std;
  
//forward-declaration is
//necessary for usage in A
//as B is not defined yet
class B;
  
class A 
{ 
    public: 
        void showB(B &x); 
}; 
  
class B
{ 
    private: 
        int b; 
    public: 
        B() : b(0) {}
        
        //Friend function Declaration
        friend void A::showB(B &x); 
}; 
 
//Friend Member Function Definition
void A::showB(B &x) 
{
    cout << "B::b = " << x.b; //0
} 
  
int main() 
{ 
    A a; 
    B x;
    
    a.showB(x);
    
    return 0; 
}
/*************************************************************************************************************************************/
//2.A global Function

#include <bits/stdc++.h>
using namespace std;
  
class A 
{
    private:
        int a; 
    public: 
        A() : a(0) {}
        
        //global friend function
        friend void showA(A&);
};

void showA(A &x) {
    std::cout << "A::a=" << x.a; //0
}

int main() 
{
    A a;
    showA(a);
    return 0; 
}



