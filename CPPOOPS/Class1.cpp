
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
        
        void work() {
            cout << "Employee: " << this->id << " is working\n";
        }
};
  
int main()
{
    //Class Instantiation (Direct)
    Employee emp("GFG123", "John", 3);
    
    //Class Instantiation (Indirect)
    Employee *emp_ptr = new Employee("GFG456", "James", 4);
     
    cout << "Employee ID: " << emp.id << endl; //GFG123
    cout << "Name: " << emp.name << endl; //John
    cout << "Experience (in years): " << emp.years << endl; //3
    
    emp.work();
    cout << endl;
    
    cout << "Employee ID: " << emp_ptr->id << endl; //GFG456
    cout << "Name: " << emp_ptr->name << endl; //James
    cout << "Experience (in years): " << emp_ptr->years << endl; //4
    
    emp_ptr->work();
    return 0;
}
