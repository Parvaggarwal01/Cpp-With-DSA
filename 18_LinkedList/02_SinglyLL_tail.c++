#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // Constructor  
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail, int d){
    
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtEnd(Node** head, int d){
    Node* temp = new Node(d);
    if(*head == NULL){
        *head = temp; 
        return;
    }

    Node* curr = *head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;


    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;


    insertAtTail(tail, 12);

    print(head);

    insertAtEnd(&head, 15);

    print(head);



}