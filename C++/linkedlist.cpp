#include<iostream>
using namespace std;

struct  node
{   public:

    string name;
    string number;
    node *next;
};

class SLL
{
    node *start,*q,*r;
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
    cout<<"\nEnter the name:-";
    cin>>p->name;
    cout << "\nEnter the number:-";
    cin >> p->number;
    p->next=NULL;
    if(start == NULL)
    {
        start = p;
    }
    else
    {
       
       q = start;
       start = p;
       p->next =q;
    }
    cout<<"Test"<<endl;
}
// void SLL::insertNodeInBetween()
// {
//     node *p = new node;
//     cout<<"\nEnter the n";
//     cin>>p->name;
//     p->next=NULL;
//     if(start == NULL)
//     {
//         start = p;
//     }
//     else
//     {
//         int pos;
//         cout<<"\nEnter the position where u want to insert a node";
//         cin>>pos;
//         q=start;
//         for(int i=1;i<pos-1;i++)
//         {
//             q=q->next;
//         }
//         p->next=q->next;
//         q->next=p;
//     }

    
// }
// void SLL::insertNodeLast()
// {
//     node *p=new node;
//     cout<<"\nEnter the node data";
//     cin>>p->data;
//     p->next=NULL;
//     if(start==NULL)
//     {
//         start=p;
//     }
//     else
//     {
//         q=start;
//         while(q->next!=NULL)
//         {
//             q=q->next;
//         }
//         q->next=p;
//     }
// }

void SLL::deleteNodeFirst()
{
    if(start==NULL)
    {
        cout<<"\nList is empty. Deleteion operation not possible..\n";
    }
    else
    {
        q=start;
        start=q->next;
        delete q;
        cout<<"First node is deleted!!";
    }
}
void SLL::deleteNodeLast()
{   
    q=start;
    if(start==NULL) // no any node in list
    {
        cout<<"\nList is empty. Deleteion operation not possible..\n";
    }
    else if(q->next==NULL)  // sinlge node in list
    {
        start=NULL;
        delete q;
        cout<<"Last node is deleted!!";
    }
    else // two or more nodes in the list
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        r=start;
        while(r->next!=q)
        {
            r=r->next;
        }
        r->next=NULL;
        delete q;
        cout<<"Last node is deleted!!";
    }
}
int SLL::searchNode(int key)
{
    q=start;
    
    while(q!=NULL)
    {
        if(key==q->data)
        {
            cout<<"key found!!\n";
            return 1;
        }
        q=q->next;
    }
    return 0;
}
void SLL::displaySSL()
{
    if(start==NULL)
    {
        cout<<"\nList is empty...\n";
    }
    else
    {
        q=start;
        cout<<"\nData in Linklist"<<endl;
        while(q!=NULL)
        {
            cout<<q->data<<"->";
            q=q->next;
        }
    }
}

int main()
{
    SLL s;
    int key,ret;
   
    s.insertNodeFirst();
    s.displaySSL();
 
    s.insertNodeFirst();
    s.displaySSL();
    s.insertNodeFirst();
    s.displaySSL();
    cout<<"Enter the value to be search";
    cin>>key;
    ret=s.searchNode(key);
    if(ret==0)
    {
        cout<<"key not found!!\n";
    }
    return 0;
    
}
