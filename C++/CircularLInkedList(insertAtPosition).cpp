#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CircularLinkedList
{
public:
    Node *head;
    CircularLinkedList()
    {
        head = NULL;
    }
    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void insertAtStart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
    }
       void insertAtPosition(int val, int position)
    {
        if (position <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *new_node = new Node(val);
        if (head == NULL)
        {
            if (position == 1)
            {
                head = new_node;
                new_node->next = head;
            }
            else
            {
                cout << "Invalid position" << endl;
            }
            return;
        }

        if (position == 1)
        {
            insertAtStart(val);
            return;
        }

        Node *current = head;
        int count = 1;
        while (count < position - 1 && current->next != head)
        {
            current = current->next;
            count++;
        }

        if (count < position - 1)
        {
            cout << "Invalid position" << endl;
            return;
        }

        new_node->next = current->next;
        current->next = new_node;
    }

    void deleteAtStart()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        delete (temp);
    }

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            return;
        }
        Node *tail = head;
        while (tail->next->next != head)
        {
            tail = tail->next;
        }
        Node *temp = tail->next;
        tail->next = head;
        delete (temp);
    }

 

};

int main()
{
    cout << "Menu" << endl;
    CircularLinkedList cll;
    cll.insertAtStart(4);
    cll.display();
    cll.insertAtStart(3);
    cll.display();
    cll.insertAtStart(2);
    cll.display();
    cll.insertAtStart(1);
    cll.display();
    cll.insertAtEnd(5);
    cll.display();
    cll.deleteAtStart();
    cll.display();
    cll.deleteAtEnd();
    cll.display();

    cll.insertAtPosition(6, 2);
    cll.display();

    return 0;
}

