#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Create List (add at end)
    void create(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Insert at a given position (position starts from 1)
    void insert(int data, int position) {
        Node* newNode = new Node(data);

        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete node at a given position
    void deleteNode(int position) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Position out of range" << endl;
            return;
        }

        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    // Display the list
    void display() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test
int main() {
    LinkedList list;

    list.create(10);
    list.create(20);
    list.create(30);
    list.display(); // 10 -> 20 -> 30 -> NULL

    list.insert(15, 2);
    list.display(); // 10 -> 15 -> 20 -> 30 -> NULL

    list.deleteNode(3);
    list.display(); // 10 -> 15 -> 30 -> NULL
    
    return 0;
}
