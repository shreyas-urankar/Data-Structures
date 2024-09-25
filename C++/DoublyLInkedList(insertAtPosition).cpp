#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		Node*prev;
		Node*next;

//constructor
Node (int data)
{
	val=data;
	prev=NULL;
	next=NULL;
	
}
};
class DoublyLinkedList{
	public:
		Node*head;
		Node*tail;
		
		//constructor
		
		DoublyLinkedList()
		{
			head=NULL;
			tail=NULL;
		}
	
	
		void display(){
			Node*temp=head;
		 while(temp!=NULL){
		     cout<<temp->val<<" ";
		 	temp=temp->next;
		 }cout<<endl;
		}  
		
		
		void insertAtStart(int val){
			Node* new_node=new Node(val);
			if(head==NULL){
				head=new_node;
				tail=new_node;
				return;
			}
			new_node->next=head;
			head->prev=new_node;
			head=new_node;
			return;
			
		}
		void insertAtEnd(int val){
			Node* new_node=new Node(val);
			if(tail==NULL){
				head=new_node;
				tail=new_node;
				return;
			}
			tail->next=new_node;
			new_node->prev=tail;
			tail=new_node;
			return;
		}
		void insertAtPosition(int k,int val){
			Node* temp=head;
			int cnt=1;
			while(cnt<(k-1)){
				temp=temp->next;
				cnt++;
			}
			Node* new_node=new Node(val);
			new_node->next=temp->next;
			temp->next=new_node;
			
			new_node->prev=temp;
			new_node->next->prev=new_node;
			
		}
	
};  
int main()
{

	DoublyLinkedList dll;

//	dll.insertAtStart(1);
//	dll.insertAtStart(2);
//	dll.insertAtStart(3);
//	dll.display();
dll.insertAtEnd(1);
dll.display();
dll.insertAtEnd(2);
dll.display();
dll.insertAtEnd(3);
dll.display();
dll.insertAtEnd(4);
dll.display();

dll.insertAtPosition(3,5);
dll.display();



	return 0;
}
