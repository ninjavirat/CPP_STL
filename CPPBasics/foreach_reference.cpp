In For-Each Loops to modify all objects
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    vector<int> v1{ 10, 20, 30, 40 }; 

    for (int x : v1) 
        x = x + 5;     //15 25 35 45 

    for (int x : v1) 
       cout << x << " "; 
    //////////////////////////////////////////
    vector<int> v2{ 10, 20, 30, 40 }; 
    for (int &x : v2)  //10 20 30 40 
        x = x + 5;

    for (int x : v2) 
    
       cout << x << " "; 

    return 0; 
}
