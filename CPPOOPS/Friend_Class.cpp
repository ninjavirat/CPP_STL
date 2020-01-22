//*****************************************************************************************************/
//A Friend Class can access private and protected members of other classes in which it is declared as a friend.
//It is sometimes useful to allow a particular class to access private members of other classes
//e.g.A LinkedList class may be allowed to access private members of Node.                     
//*****************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node
{
    private:
        int key;
        Node *next;
        Node(int key) : key(key), next(nullptr) {}
        
    public:
        friend class LinkedList;
};

class LinkedList
{
    public:
        Node *root;
        
        LinkedList(int key) {
            root = new Node(key);
        }
        
        void insert(int key) {
            Node *trav = root;
            while (trav->next != nullptr)
                trav = trav->next;
            trav->next = new Node(key);
        }
        
        void print() {
            Node *trav = root;
            while (trav != nullptr) {
                cout << trav->key << " "; //0 1 2 3 4
                trav = trav->next;
            }
            cout << endl;    
        }
};

int main()
{
     LinkedList list(0);
     
     list.insert(1);
     list.insert(2);
     list.insert(3);
     list.insert(4);
     
     list.print();
     
     return 0;
}
//*****************************************************************************************************/
//As we can see in the above code, LinkedList has access to all the private fields of Node class,      /
//because it has been declared as a friend inside the Node class.                                      /
//*****************************************************************************************************/
