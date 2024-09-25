#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=next;
    }

};
int llnode(){
    Node* node1=new Node();
    cout<<node1->data<<endl;
    cout<<node2->next<<endl;
    return 0;
}