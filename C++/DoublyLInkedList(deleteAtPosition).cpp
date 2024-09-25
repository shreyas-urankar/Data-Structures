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
		void insertAtPosition(int val,int k){
			Node* temp=head;
			int cnt=1;
			while(cnt<(k-1)){
				temp=temp->next;
				cnt++;
			}
			Node* new_node=new Node(val);
			new_node->next=temp->next;
			temp->next=new_node;
			
			new_node->next=temp->next;
			new_node->next->prev=new_node;
			
		}
			void deleteAtStart(){
			if(head==NULL){
				return;
			}
			Node* temp=head;
			head=head->next;
			if(head==NULL){
				tail=NULL;
			}else{
				head->prev=NULL;
			}
			delete temp;
			return;
		
			
		}
		void deleteAtEnd()
		{
			if (head==NULL)
			{
				return;
			}
			Node* temp=tail;
			tail=tail->prev;
			if(tail==NULL)
			{
				head=NULL;
			}else
			{
				tail->next=NULL;
			}
			delete(temp);
			return;
		}
		void deleteAtPosition(int k)
		{
			Node* temp=head;
			int cnt=1;
			while(cnt<k)
			{
				temp=temp->next;
				cnt++;
			}
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			delete(temp);
			return;
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
//dll.deleteAtStart();
//dll.display();
//dll.deleteAtEnd();
//dll.display();
dll.deleteAtPosition(2);
dll.display();

	return 0;
}
