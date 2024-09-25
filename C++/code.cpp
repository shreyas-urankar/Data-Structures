#include <iostream>
using namespace std;

struct node
{
public:
    string name;
    string number;
    node *next;
};

class SLL
{
    node *start, *q, *r;

public:
    SLL()
    {
        start = NULL;
        q = NULL;
    }
    void insertNodeFirst();
    void insertNodeInBetween();
    void insertNodeLast();
    void deleteNodeFirst();
    void deleteNodeLast();
    void deleteNodeInBetween();
    int searchNode(int key);
    void displaySSL();
};
void SLL::insertNodeFirst()
{
    node *p = new node;
    cout << "\nEnter the name:-";
    cin >> p->name;
    cout << "\nEnter the number:-";
    cin >> p->number;
    p->next = NULL;
    if (start == NULL)
    {
        start = p;
    }
    else
    {


        q = start;
        start = p;
        p->next = q;
    }
    cout << "Test" << endl;
}

void SLL::displaySSL(){
    void SLL::displaySSL()
    {
        if (start == NULL)
        {
            cout << "\nList is empty...\n";
        }
        else
        {
            q = start;
            cout << "\nData in Linklist" << endl;
            while (q != NULL)
            {
                cout << q->data << "->";
                q = q->next;
            }
        }
    }
}

int main(){
    
}