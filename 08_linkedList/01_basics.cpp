#include<iostream>
using namespace std; 

class Node {
    public: 
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node * head;
    Node * tail;

    public: 
       List() {
        head = tail = NULL;
       }
    
    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
        // Node newNode(val); // static
    }
    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            tail-> next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if(head == NULL) {
            return;
        } else {
            Node* toDelete = head;
            head = head-> next;
            delete toDelete;
        }
    }
    void pop_back() {
        if(head == NULL) {
            return;
        } else {
            Node* temp = head;
            while(temp-> next != tail) {
                temp = temp-> next;
            }
            Node* toDelete = tail;
            tail = temp;
            tail-> next = NULL;
            delete toDelete;
        }
    }
    void insertAtPosition(int pos, int val) {
        if(pos == 0) {
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++) {
            temp = temp-> next;
        }
        newNode-> next = temp-> next;
        temp-> next = newNode;
    }
    void printLL() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp-> data << " -> ";
            temp = temp-> next;
        }
        cout << "NULL" << endl;
    }
    void search(int key) {
        Node* temp = head;
        while(temp != NULL) {
            if(temp-> data == key) {
                cout << "Found" << endl;
                return;
            }
            temp = temp-> next;
        }
        cout << "Not Found" << endl;
    }
};

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);   
    ll.push_front(3);

}