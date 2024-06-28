#include <iostream>
using namespace std;
struct Node{
	int prior;
	int age;
	char Name[20];
	char Gender[10];
	Node* next;
	
	};
	class hospital
	{
		Node *front,*p,*q,*r;
		public:
			hospital()
			{
				p=NULL;q=NULL;front=NULL;r=NULL;
			}
			public:
		void Enqueue();
		void Dequeue();
		void Display();
			
	};
	void Enqueue(){
		Node *p=new Node();
		cout<<"Nmar of the patient :-"<<endl;
		cin>>p->Name;
		cout<<"Age of the patient:-"<<endl;
		cin>>p->age;
		cout<<"Enter the priority of the patent:-"<<endl;
		cout<<"1) Serious (TOp Priority)   1"<<endl;
			cout<<"1) Serious (Top Priority)   1"<<endl;
				cout<<"2) Medium illness (medium Priority)   2"<<endl;
					cout<<"3) General (Least Priority)   3"<<endl;
					cout<<"Enter your choice:-"<<endl;
					cin>>p->prior;
					cout<<"Gender of patient:-"<<endl;
					cin>>p->Gender;
					
					if((front==NULL)||(p->prior<front->prior))
					{
						p->next=front;
						front=p;
					}
					else
					{
						Node* temp=front;
						temp=front;
						while((temp->next!=NULL)&&(temp->next->prior<=p->prior))
						{
							temp=temp->next;
						
						}
						p->next=temp->next;
						temp->next=p;
					}
					cout<<"Entry entered."<<endl;
					cout<<"\n\n"<<endl;
				}
					void Dequeue()
					{
					
						struct Node*temp;
						temp=front;
						front=front->next;
						temp->next=NULL;
						cout<<"\n Patient checked successfully\n"<<endl;
						delete temp;
					}
					void Display()
				
					{
						p=front;
						q=front;
						cout<<"Priority\t Name of patient\t Ahe of patient\t Gender of patient"<<endl;
						while(q->next!=NULL)
						{
							cout<<" "<<q->prior<<"\t\t"<<q->Name<<"\t\t\t"<<q->age<<"\t\t\t"<<q->Gender<<endl;
							q=q->next;
						}
				cout<<" "<<q->prior<<"\t\t\t"<<q->Name<<"\t\t\t"<<q->age<<"\t\t\t"<<q->Gender<<endl;
					cout<<"\n\n"<<endl;
					}
				
	int main()
	{
		hospital p;
		int choice;
		while(1)
		{
			cout<<"Enter the choice:-"<<endl;
			cout<<"a>Enter the entry  [1]"<<endl;
				cout<<"b>Delete the entry  [2]"<<endl;
				cout<<"a>Disply the entry  [3]"<<endl;
				cout<<"d>Exit       [0]"<<endl;
				cout<<"Your choice:-"<<endl;
				cin>>choice;
				if(choice==1)
				p.Enqueue();
				else if(choice==2)
				p.Dequeue();
				else if(choice==3)
				p.Display();
				else if(choice=0)
				exit(0);
				
			
		}
	}
	
	
