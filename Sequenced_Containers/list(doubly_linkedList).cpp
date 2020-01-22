/**************************************************************************************** /
Below is a sample program to create a list and insert two elements at back and one element at front:
******************************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Create a List
    list<int> l;
    
    // Push two elements at back
    l.push_back(10);
    l.push_back(20); 
    
    // Push an element to front
    l.push_front(5);
    
    // Traverse and print elements
    for(auto x: l)
    {
        cout<<x<<" "; //5 10 20
    }
    
    return 0;
}


/**************************************************************************************** /
Let's now check two more functions to remove elements from front and end of a List:
************************************/

#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Create a List
    list<int> l = {10, 2, 5, 20};
    
    // Remove elements from front and back
    l.pop_front();
    l.pop_back();
    
    // Traverse and print elements
    for(auto itr = l.begin(); itr != l.end(); itr++)
    {
        cout<<*itr<<" "; // 2 5
    }
    
    return 0;
}
-------------------------------------------------------------------
//Note: In the above program we have used iterators to traverse the list. Since, elements in list are non-contiguous, we can not use simple for loop to traverse the elements.
-------------------------------------------------------------------

/**************************************************************************************** /
Inserting elements in the List:
******************************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Create a List
    list<int> l = {10, 20, 30};
    
    // Iterator pointing to first element
    auto itr = l.begin();
    
    // Advance the Iterator to point to 
    // second element
    itr++;
    
    // Insert 15 at second position keeping the 
    // interator at second position only
    itr = l.insert(itr, 15); //10 15 20 30
    
    // Insert 7 two times at position 2
    l.insert(itr, 2, 7);    //10 7 7 15 20 30
    
    // Print elemnet at front and rear end
    cout<<l.front()<<" "<<l.back(); //10 30
    
    // Print size of the list
    cout<<" "<<l.size(); //6
    
    return 0;
}


/---------------------------------------------------------------------------------
/*Deleting elements from List:
------------------------------
We can delete elements from a List, either using erase() function or remove() function. The erase() function deletes elements present at a specific position or range whereas the remove() function deletes all occurrences of a given element from the List.
==================================================================================================================================================================================================================================================================================================================
Let us learn about each of these two functions in details:
erase(): The list::erase() is a built-in function in C++ STL which is used to delete elements from a list container. This function can be used to remove a single element or a range of elements from the specified list container.

Syntax:
iterator list_name.erase(iterator position)

or,

iterator list_name.erase(iterator first, iterator last)


Parameters: This function can accepts different parameters based on whether it is used to erase a single element or a range of element from the list container.
position: This parameter is used when the function is used to delete a single element. This parameter refers to an iterator which points to the element which is need to be erased from the list container.
first, last: These two parameters are used when the list is used to erase elements from a range. The parameter first refers to the iterator pointing to the first element in the range and the parameter last refers to the iterator pointing to the last element in the range which is needed to be erased. This erases all the elements in the range including the element pointed by the iterator first but excluding the element pointed by the iterator last.

Return Value: This function returns an iterator pointing to the element in the list container which followed the last element erased from the list container.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
remove(): The list::remove() is a built-in function in C++ STL which is used to remove elements from a list container. It removes elements comparing to a value. It takes a value as the parameter and removes all the elements from the list container whose value is equal to the value passed in the parameter of the function.

Syntax:
list_name.remove(val) 


Parameters: This function accepts a single parameter val which refers to the value of elements needed to be removed from the list. The remove() function will remove all the elements from the list whose value is equal to val.
*/
-----------------------------------------------------------------------------------


#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Create a List
    list<int> l = {10, 20, 30, 40, 20, 40};
    
    // Iterator pointing to first element
    auto itr = l.begin();
    
    // Erase element pointed by itr
    itr = l.erase(itr); //20, 30, 40, 20, 40
    
    // Remove all occurrences of 40
    l.remove(40);  //20 30 20
    
    for(auto x:l)
        cout<<x<<" ";
        
    return 0;
}



/**************************************************************************************** /
Merging two Lists:
-----------------
We can merge two sorted Lists directly using the built-in merge() function. The list::merge() is an inbuilt function in C++ STL which merges two sorted lists into one. The lists should be sorted in ascending order. It merges two sorted lists into a single sorted list.

Syntax:
list1_name.merge(list2_name)

Parameters: The function accepts a single mandatory parameter list2_name which specifies the list to be merged into list1.

******************************************************************************************/


#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // declaring the lists 
    // initially sorted 
    list<int> list1 = { 10, 20, 30 }; 
    list<int> list2 = { 40, 50, 60 }; 
  
    // merge operation 
    list2.merge(list1); 
  
    cout << "List:  "; 
  
    for (auto it = list2.begin(); it != list2.end(); ++it) 
        cout << *it << " ";  //10 20 30 40 50 60
  
    return 0; 
} 


//***************************************************************************************************************************************************************
/* Josephs Problem:
---------------------*/
#include <bits/stdc++.h>
using namespace std;
int  getSave(int n,int k){
	list<int> l;
	for(int i=0;i<n;i++){
		l.push_back(i);
	}
	
	auto it =l.begin();
	
	while(l.size()>1){
		for(int i=1;i<k;i++){
			it++;
			if(it==l.end()){
				it=l.begin();
			}
			
		}
		it=l.erase(it);
		if(it==l.end()){
			it=l.begin();
		}
		
	}

   	return *it;
 //  for(int x:l)
	// cout<<x<<" ";
}
int main() {
	int n=7;
	int k=3;
	cout<<getSave(n,k);
	return 0;
}