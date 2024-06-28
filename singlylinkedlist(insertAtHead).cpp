#include<iostream>
using namespace std;
 class Node{
public:
	int val;
	Node* next;
	
	Node(int data)
	{
		val=data;
		next=NULL;
	}
};

void insertAtHead(Node* &head, int val)
{
	Node* new_node=new Node(val);
	new_node->next=head;
	head=new_node;
}

void insertAtTail(Node* &head,int val)
{
	Node* new_node=new Node(val);
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node; 
}

void insertAtPosition(Node*&head,int val,int position)
{
	if (position==0)
	{
		insertAtHead(head,val);
		return;
	}
	Node* new_node=new Node(val);
	Node* temp=head;
	int current_position=0;
	while(current_position!=position-1)
	{
		temp=temp->next;
		current_position++;
	}
	//temp is pointing to node at pos-1
	new_node->next=temp->next;
	temp->next=new_node;
}

void deleteAtHead(Node* &head)
{
	Node*temp=head;
	head=head->next;
	delete(temp);
}

void deleteAtTail(Node*&head)
{
	Node*second_last=head;
	while(second_last->next->next!=NULL)
	{
		second_last=second_last->next;
	}//now secondlast points to secondlast node
	Node* temp=second_last->next;
	second_last->next=NULL;
	delete(temp);
}

void deleteAtPosition(Node*&head,int pos)
{
	if(pos==0)
	{
		deleteAtHead(head);
	}
	int cnt=0;
	Node*prev=head;
	while(cnt!=pos-1)
	{
		prev=prev->next;
		cnt++;
	}
	Node* temp=prev->next;
	prev->next=prev->next->next;
	delete(temp);
}

void display(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
//int main()
//{
//	Node* head=NULL;
//	insertAtHead(head,1);
//	display(head);
//	insertAtHead(head,2);
//	display(head);
//	insertAtHead(head,3);
//	display(head);
//	insertAtHead(head,4);
//	display(head);
//	insertAtTail(head,5);
//	display(head);
//	insertAtPosition(head,4,2);
//	display(head);
//	deleteAtHead(head);
//	display(head);
//	deleteAtTail(head);
//	display(head);
//	deleteAtPosition(head,2);
//	display(head);
//	
//	return 0;
//}
int main() {
SLL list;
int choice;
do {
cout << "\nMenu:\n";
cout << "1. Insert at first\n";
cout << "2. Insert at last\n";
cout << "3. Insert at position\n";
cout << "4. Delete at first\n";
cout << "5. Delete at last\n";
cout << "6. Delete at position\n";
cout << "7. Display\n";
cout << "8. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
list.insertAtHead();
break;
case 2:
list.insertAtTail();
break;
case 3:
list.insertAtPosition();
break;
case 4:
list.deleteAtHead();
break;
case 5:
list.deleteAtTail();
break;
case 6:
list.deleteAtPosition();
break;
case 7:
list.display();
break;
case 8:
cout << "Exiting program.\n";
break;
default:
cout << "Invalid choice. Try again.\n";
break;
}
} while (choice != 8);
return 0;
}
