//Const Cast - This is used to add/remove constness of a variable.
#include <bits/stdc++.h> 
using namespace std; 
  
class student 
{ 
private: 
    int roll; 
public: 
    // constructor 
    student(int r):roll(r) {} 
  
    // A const function that changes roll 
    // with the help of const_cast 
    void fun() const
    { 
        ( const_cast <student*> (this) )->roll = 5; 
    } 
  
    int getRoll()  { return roll; } 
}; 
  
int main(void) 
{ 
    student s(3); 
    cout << "Old roll number: " << s.getRoll() << endl; //3
  
    s.fun(); 
  
    cout << "New roll number: " << s.getRoll() << endl; //5
  
    return 0; 
} 
