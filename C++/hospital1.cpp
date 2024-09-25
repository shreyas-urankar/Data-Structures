#include <iostream>
using namespace std;

// Define a structure for representing each patient's information
struct Node {
    int prior;         // Priority of the patient
    int age;           // Age of the patient
    char Name[20];     // Name of the patient
    char Gender[10];   // Gender of the patient
    Node* next;        // Pointer to the next patient in the queue
};

// Define a class for the hospital management system
class hospital {
private:
    Node* front;  // Pointer to the front of the queue

public:
    hospital() : front(nullptr) {}

    // Function to add a new patient to the queue based on priority
    void Enqueue();

    // Function to remove the patient with the highest priority (front of the queue)
    void Dequeue();

    // Function to display the information of all patients in the queue
    void Display();
};

// Implementation of the Enqueue function to add a new patient
void hospital::Enqueue() {
    Node* p = new Node;  // Create a new patient node
    cout << "Name of the patient: " << endl;
    cin >> p->Name;
    cout << "Age of the patient: " << endl;
    cin >> p->age;
    cout << "Enter the priority of the patient:" << endl;
    cout << "i) Serious (top priority)              1" << endl;
    cout << "ii) Medium illness (medium priority)    2" << endl;
    cout << "iii) General (Least priority)            3" << endl;
    cout << "Enter your choice: " << endl;
    cin >> p->prior;
    cout << "Enter the Gender of the patient: " << endl;
    cin >> p->Gender;

    // Insert the new patient into the queue based on priority
    if (front == nullptr || p->prior < front->prior) {
        p->next = front;
        front = p;
    } else {
        Node* temp = front;
        while (temp->next != nullptr && temp->next->prior <= p->prior) {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
    }

    cout << "Entry entered." << endl;
    cout << "\n\n" << endl;
}

// Implementation of the Dequeue function to remove the patient with the highest priority
void hospital::Dequeue() {
    if (front != nullptr) {
        Node* temp = front;
        front = front->next;
        temp->next = nullptr;
        cout << "Patient checked successfully." << endl;
        delete temp;
    } else {
        cout << "Queue is empty. No patient to check." << endl;
    }
}

// Implementation of the Display function to show information of all patients
void hospital::Display() {
    Node* q = front;

    if (q != nullptr) {
        cout << "Priority\tName of patient\tAge of patient\tGender of patient" << endl;
        while (q != nullptr) {
            cout << q->prior << "\t\t\t" << q->Name << "\t\t\t" << q->age << "\t\t\t" << q->Gender << endl;
            q = q->next;
        }
    } else {
        cout << "Queue is empty. No patients to display." << endl;
    }

    cout << "\n\n" << endl;
}

// Main function to interact with the hospital management system
int main() {
    hospital p;  // Create an instance of the hospital class
    int choice;

    // Menu loop for user interaction
    while (true) {
        cout << "Enter the choice:" << endl;
        cout << "a> Enter the entry   [1]" << endl;
        cout << "b> Delete the entry  [2]" << endl;
        cout << "c> Display Entries   [3]" << endl;
        cout << "d> Exit              [0]" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                p.Enqueue();  // Call the Enqueue function to add a new patient
                break;
            case 2:
                p.Dequeue();  // Call the Dequeue function to remove a patient
                break;
            case 3:
                p.Display();  // Call the Display function to show all patients
                break;
            case 0:
                exit(0);  // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

