//Any constructor that can be called with a single argument works as a conversion constructor 
//which means it can also be used for implicit conversion to the class being constructed.
#include <bits/stdc++.h>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        Point(int i=0, int j=0) : x(i), y(j) {}
        void print() {
            cout << endl << " x = " << x << ", y = " << y;
        }
};

int main() {
    Point t(20, 20);
    t.print(); //20 20
    t = 30;   // Member x of t becomes 30
    t.print(); //30 0
    return 0;
}
