
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring String
    string s="geeksforgeeks";
    //declaring the iterator
    string:: iterator it;
    
    //for taking the input string it can't buffer the space separated string
    //cin>>str;
    
    //it can hold the above exception well.
    //getline(cin,str);
    
    // Printing the String
    for(it= s.begin();it!=s.end();it++){
    	 cout<<*it;
    }
    cout<<endl;
    
    //printing the first letter in the string.
    cout<<*s.begin()<<endl;
    //printing the Last letter in the string.
    //s.end() access is invalid, so we 
    //do as s.end() - 1, to get the iterator
    //pointing at the last character
    cout<<*(s.end()-1)<<endl;
    //////////////////////////////////////////////////////////
    cout << "Length of String: " << s.size()<<" "<<s.length()<<endl; //13 13
    //////////////////////////////////////////////////////////
    //Clear out the given string
    s.clear();
    
    //Check if empty
    if (s.empty())
        cout << "String is empty\n";
    //////////////////////////////////////////////////////////    
    
    
    string s1 = "Hello";
    string s2 = "Good Day ";
    
    //Insert s2 at index 6 of s1
    s1.insert(4, s2); //HellGood Day o
    cout << s1 << endl;
    
    //////////////////////////////////////////////////////////
    string str = "abc";
    //Append character 'd' to end
    str.push_back('d'); //abcd
    cout << str << endl;
    //Remove last character
    str.pop_back();  //abc
    cout << str << endl;
    /////////////////////////////////////////////////////////
    
    //find: Find occurence of one string in another. 
    //If string is found, the position of occurence is returned,
    //else string::npos is returned (indicating not-found).
    string s4 = "GeeksforGeeks";
    string s5 = "for";
    string s6 = "abc";
    //Returns 5 as 'for' is found at 
    //index 5 in s1
    cout << s4.find(s5) << endl; //5
    //s6 is not present in s4
    //so it return npos
    if (s4.find(s6) == string::npos) 
        cout << "String '" << s6 << "' not found\n";//String 'abc' not found
    
    /////////////////////////////////////////////////////////////////
    
    string str2 = "GeeksforGeeks";
    
    //1st argument is: position
    //2nd argument is: no. of characters
    cout << str2.substr(5, 3) << endl; //'for'
    
    //If 2nd argument is not provided, substring
    // is generated from position to end to string
    cout << str2.substr(5) << endl; //'forgeeks'
    //////////////////////////////////////////////
    
    return 0;
}
