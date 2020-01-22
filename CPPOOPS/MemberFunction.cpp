
#include <bits/stdc++.h>
using namespace std;
  
class Employee {  //Class Declaration
    public:
        string id, name;
        int years;  //experience (in years)
         
        Employee(string id, string name, int years) {
            this->id = id;
            this->name = name;
            this->years = years;
        }
        
        //Prototype Declaration
        void work();
};

//Outside-class definition
void Employee::work() {
    cout << "Employee: " << this->id << " is working\n"; //GFG123
}
  
int main()
{
    //Class Instantiation (Direct)
    Employee emp("GFG123","John",3);
    
    emp.work();
    return 0;
}
