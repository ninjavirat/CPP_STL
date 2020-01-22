//cstyle strings program
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="hello";
    for (int i=0;i<strlen(str);i++)
        cout<<(char)(str[i]-'a'+'A');    //HELLO
    cout<<endl; 
    //////////////////////////////////////////////////
    char src[] = "source";
    char dest[] = "destination";
    
    cout<<strcat(dest,src)<<endl; //destinationsource
    
    //////////////////////////////////////////////////
    
    char str1[]="abc";
    char str2[]="abcd";
    char str3[]="abb";
    
    cout<<strcmp(str1,str2)<<endl; //-100
    cout<<strcmp(str1,str3)<<endl; //1
    cout<<strcmp(str2,str3)<<endl; //1
    
    /////////////////////////////////////////////////////
    char dest1[100];
    char src1[]="Hello World";
    strcpy(dest1, src1);
    cout<<"Source: "<<src1<<endl;           //Hello world
        cout<<"Destination: "<<dest1<<endl; //Hello World
        
    /////////////////////////////////////////////////////
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char *p;
    
    p = strstr(s1, s2);
  
    if (p) 
        cout << "First occurrence of string '" << s2
        << "'\n in '" << s1 << "' is '" << p <<"'"<<endl; //forgeeks
    else
        cout << "String not found\n"; 
    //////////////////////////////////////////////////////
    return 0;
}