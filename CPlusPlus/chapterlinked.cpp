#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(const int data) {
        this->data = data;
        this->next = NULL;
    }
};


Node* head = NULL;

void insertNode(const int val) {
    Node* newHead = new Node(val);
    newHead->next = head;
    head = newHead;
}

void insert_at_end(const int val) {
    Node* newNode = new Node(val);

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
}

void search_list(const int target) {
    if (head->data == target) {
        cout << "Data found" << endl;
        return;
    }
    Node* curr = head->next;

    while (curr != NULL) {
        if (curr->data == target) {
            cout << "Data found" << endl;
            return;
        }
        curr = curr->next;
    }

    cout << "Data not found" << endl;
}



void printList() {
    Node* curr = head;

    while (head != NULL) {
        cout << head->data << "--->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int val;
    cout <<"Linked list in Cpp";
    int operation;
    int target;


    do {
        cout << "Choose operation to perform: " << endl;
        cout << "1. Insert value at head" << endl;
        cout << "2. Insert value at end" << endl;
        cout << "3. Search a value" << endl;
        cout << "4. Delete a value" << endl;
        cout << "5. Print list" << endl;
        cout << "6. To end operation" << endl;
        cin >> operation;

        if (operation == 1) {
            cout<<"Enter value: " << endl;
            cin >> val;
            insertNode(val);
        }
        else if (operation == 2) {
            cout<<"Enter value: " << endl;
            cin >> val;
            insert_at_end(val);
        }
        else if (operation == 3) {
            cout<<"Enter target value: " << endl;
            cin >> target;
            search_list(target);
        }
        else if (operation == 5) {
            printList();
        }
    }while (operation < 6);

    printList();

}