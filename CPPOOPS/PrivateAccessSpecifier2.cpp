
#include <bits/stdc++.h>
using namespace std;

class Circle
{   
    //private data member
    private: 
        double radius;
     
    //public member functions
    public:
        int getRadius() { return radius; }
        void setRadius(double r) { radius = r; }
        
        double compute_area() { return 3.14 * radius * radius; }
};

int main()
{
    Circle obj;
    
    obj.setRadius(5);
    cout << "Radius: " << obj.getRadius() << endl; //5
    cout << "Area: " << obj.compute_area() << endl; //78.5
    
    return 0;
}
