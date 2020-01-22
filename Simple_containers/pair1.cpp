
// CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair <int, char> PAIR1 ;

    PAIR1.first = 100;
    PAIR1.second = 'G' ;

    cout << PAIR1.first << " " ; //100
    cout << PAIR1.second << endl ; // G

    return 0;
}
