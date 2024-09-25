#include <iostream>

using namespace std;
struct Node
{
    int prior;
    int age;
    char Name[20];
    char Gender[10];
    Node *next;
};

class hospital
{
    Node *front,*temp,*p,*q,*r;
public:
    hospital()
    {
        p=NULL;
        q=NULL;
        r=NULL;
        front=NULL;
    }
public:
    void Enqueue();
    void Dequeue();
    void Display();

};
void hospital::Enqueue()
{
    Node *p = new Node;

    cout<<"name of the patient:-"<<endl;
    cin>>p->Name;
    cout<<"age of the patient:-"<<endl;
    cin>>p->age;
    cout<<"Enter the priority of the patient:-"<<endl;
    cout<<"i)   Serious (top priority)              1"<<endl;
    cout<<"ii)  medium illness (medium priority)    2"<<endl;
    cout<<"iii) General (Least priority)            3"<<endl;
    cout<<"Enter your choice:-"<<endl;
    cin>>p->prior;
    cout<<"Enter the Gender of the patient:-"<<endl;
    cin>>p->Gender;

    if((front==NULL)|| (p->prior<front->prior))
    {
        p->next=front;
        front=p;
    }
    else
    {
        temp=front;
        while((temp->next!=NULL) && (temp->next->prior<=p->prior))
        {
            temp=temp->next;
        }
        p->next=temp->next;
        temp->next=p;
    }
    cout<<"Entry entered."<<endl;
    cout<<"\n\n"<<endl;
}
void hospital::Dequeue()
{
    struct Node *temp;
temp=front;
front=front->next;
temp->next=NULL;
cout<<"\n patient checked successfully \n "<<endl;
delete temp;
}

void hospital::Display()
{
    p=front;
    q=front;
    cout<<"Priority\t   Name of patient\t   Age of patient\t   Gender of patient"<<endl;
    while(q->next!=NULL)
    {
        cout<<"   "<<q->prior<<"\t\t\t"<<q->Name<<"\t\t\t"<<q->age<<"\t\t\t"<<q->Gender<<endl;
        q=q->next;
    }
    cout<<"   "<<q->prior<<"\t\t\t"<<q->Name<<"\t\t\t"<<q->age<<"\t\t\t"<<q->Gender<<endl;
    cout<<"\n\n"<<endl;

}

int main()
{
    hospital p;
    int choice;

    while(1)
    {
     cout<<"Enter the choice:"<<endl;
     cout<<"a> Enter the entry   [1]"<<endl;
     cout<<"b> Delete the entry  [2]"<<endl;
     cout<<"c> Display Entries [3]"<<endl;
     cout<<"d> Exit              [0]"<<endl;
     cout<<"Your choice:-"<<endl;
     cin>>choice;
     if(choice==1)
        p.Enqueue();
     else if(choice==2)
        p.Dequeue();
     else if(choice==3)
        p.Display();
     else if(choice==0)
        exit(0);
    }
}
