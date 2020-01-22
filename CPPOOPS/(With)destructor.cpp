
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
        p_chr = s;
        strcpy(s, c);
    }

    // Destructor
    ~String()
    {
        delete[] s;
    }
};

void func()
{
    String str("Hello World");
}

int main()
{
    func();
    cout << p_chr << endl;
    return 0;
}
//The above code prints nothing 
//because p_chr reference is gone due to destructor call.
