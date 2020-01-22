
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int key;
    struct node* next;
};

node *start, *last;

void insert(int x)
{
    if (!start) {
        start = (node*)malloc(sizeof(node));
        start->key = x;
        start->next = NULL;
        last = start;
    }
    else {
        last->next = (node*)malloc(sizeof(node));
        last = last->next;
        last->key = x;
        last->next = NULL;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    node* trav = start;

    while (trav) {
        cout << trav->key << " "; //1,2,3,4,5,6
        trav = trav->next;
    }

    return 0;
}
