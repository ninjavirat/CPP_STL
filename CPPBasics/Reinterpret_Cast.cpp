//Reinterpret Cast - It is the most dangerous cast, which should be used sparingly. It turns one type directly into another without a safety check. 
//(e.g. one can store pointer value to an int).
#include <bits/stdc++.h> 
using namespace std; 
  
typedef struct Test
{
    int x, y;
} Test;
  
int main(void) 
{ 
    Test *ptr_T = new Test(); 
    
    // gives compilation error 
    // (Invalid casting from Test* to int*)
    // comment out this line and the code works
    
    //int *ptr_i = static_cast<int*>(ptr_T);
    
    // Convert Test* to int* using reinterpret_cast
    // works like a charm!, but it is dangerous to use
    int *ptr_i = reinterpret_cast<int*>(ptr_T);
  
    return 0; 
}
