
#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        void whoami() {
            cout << "I'm Base Class!!\n";
        }
};

class Derived : public Base {
    
};

int main()
{
    Base b;
    Derived d;
    
    b.whoami(); //I'm Base Class!!
    d.whoami(); //I'm Base Class!!
    
    return 0;
}
//******************************************************************************************************************************************************************************//

#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        void whoami() {
            cout << "I'm Base Class!!\n";
        }
};

class Derived : public Base {
    public:
        void whoami() {
            cout << "I'm Derived Class!!\n";
        }
};

int main()
{
    Base b;
    Derived d;
    
    b.whoami(); //I'm Base Class!!
    d.whoami(); //I'm Derived Class!!
    
    return 0;
}
/*****************************************************************************************************************************************************************/
/***********************************************************************************************************************************************************************//

#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        void whoami() {
            cout << "I'm Base Class!!\n";
        }
};

class Derived : public Base {
    public:
        void whoami() {
            // call Base class's version
            Base::whoami();                   //I'm Base Class!!
            cout << "I'm Derived Class!!\n";  //I'm Derived Class!!
        }
};

int main()
{
    Derived d;
    
    d.whoami();
    
    return 0;
}

/***************************************************************************************************************/
