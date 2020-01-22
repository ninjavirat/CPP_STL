
#include <bits/stdc++.h>
using namespace std;

char* p_chr;

class String {
public:
    char* s;
    int size;

    String(char* c)
    {
        size = strlen(c);
        s = new char[size + 1];
        p_chr = s; // assign to global variable
        strcpy(s, c);
    }
};

void func()
{
    String str("Hello World");
}

int main()
{
    func();
    cout << p_chr << endl; //Hello World
    return 0;
}
//**************************************************************************************************************************************************************//
//In the above code, we dynamically create a character array in our constructor, where we copy the string passed as an argument.
//Since it is a dynamically-allocated memory, once, the lifetime of str object expires (inside the func() call), still the memory is not de-allocated, as in main(),
//when we print p_chr, we get the string. Thus, we can see that proper clean-up of pointer references doesn't occur. Thus, we need destructors 
//where we would explicitly de-allocate the memory and perform other clean-up code. Syntax of destructor:
//****************************************************************************************************************************************************************//