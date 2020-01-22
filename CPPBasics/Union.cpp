
#include <bits/stdc++.h>
using namespace std;

union test {
    int x, y;
};

int main()
{
    test t;
    t.x = 2;
    cout << t.x << " " << t.y << endl; //2 2
    t.y = 3;
    cout << t.x << " " << t.y << endl;//3 3

    return 0;
}
