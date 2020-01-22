// Implement a list of numbers which doesn't require being provided any initial size, and can extend to as much as we want.
// There are 2 ways to implement this:
// Make a dynamically-allocated array. When it gets full, extend it by using realloc.
////////////////////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

int *start, *last;
int size;

void insert(int x)
{
    if (!start) {
        // Initially no element present
        // hence malloc()
        start = (int*)malloc(sizeof(int));
        size = 1;
        last = start;
        *last = x;
        return;
    }
    else if (last - start + 1 == size) {
        // Once capacity is full,
        // we realloc to double the size
        size <<= 1;
        start = (int*)realloc(start, size * sizeof(int));
    }

    // Insert the element
    *(++last) = x;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    int num = last - start + 1;
    int* trav = start;

    while (num--) {
        cout << *trav << " "; //1 2 3 4 5 6
        trav++;
    }

    return 0;
}
//Above program implements a dynamically growing array depending upon how many numbers we keep inserting. We keep 3 pieces of information to facilitate the storage - start, last pointers and size variable. size indicates the total size of the array currently. Whenever we insert an element, we compare (last - start + 1) with size. This indicates whether the array is full/currently has space. If it is equal to the size, then we realloc and increase the size by twice of the earlier present size. Hence, size of the array grows in powers of 2: 1 -> 2 -> 4 -> 8 and so on. We then insert the element using *(++last) = x;. This is the exactly how the vector template class under C++ STL is implemented under the hood.