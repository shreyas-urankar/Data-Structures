#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtHead(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void insertAtTail(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void insertAtPosition(int val, int position) {
        if (position == 0) {
            insertAtHead(val);
            return;
        }
        Node* new_node = new Node(val);
        Node* temp = head;
        int current_position = 0;
        while (current_position != position - 1) {
            temp = temp->next;
            current_position++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteAtHead() {
        if (head == NULL) {
            cout << "List is empty, cannot delete from an empty list." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtTail() {
        if (head == NULL) {
            cout << "List is empty, cannot delete from an empty list." << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* second_last = head;
        while (second_last->next->next != NULL) {
            second_last = second_last->next;
        }
        Node* temp = second_last->next;
        second_last->next = NULL;
        delete temp;
    }

    void deleteAtPosition(int pos) {
        if (head == NULL) {
            cout << "List is empty, cannot delete from an empty list." << endl;
            return;
        }
        if (pos == 0) {
            deleteAtHead();
            return;
        }
        int cnt = 0;
        Node* prev = head;
        while (cnt != pos - 1) {
            if (prev->next == NULL) {
                cout << "Position is out of range." << endl;
                return;
            }
            prev = prev->next;
            cnt++;
        }
        Node* temp = prev->next;
        prev->next = prev->next->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
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
            int val;
            cout << "Enter value to insert: ";
            cin >> val;
            list.insertAtHead(val);
            break;
        case 2:
            cout << "Enter value to insert: ";
            cin >> val;
            list.insertAtTail(val);
            break;
        case 3:
            int position;
            cout << "Enter position to insert: ";
            cin >> position;
            cout << "Enter value to insert: ";
            cin >> val;
            list.insertAtPosition(val, position);
            break;
        case 4:
            list.deleteAtHead();
            break;
        case 5:
            list.deleteAtTail();
            break;
        case 6:
            cout << "Enter position to delete: ";
            cin >> position;
            list.deleteAtPosition(position);
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

