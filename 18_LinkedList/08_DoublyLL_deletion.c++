#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // ~Node(){
    //     int value = this->data;
    //     if(next!=NULL){
    //         delete next;
    //         next = NULL;
    //     }
    //     cout << "Memory Free for node for data " << value << endl;
    // }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    
    return len;
}

void insertAtHead(Node*& tail, Node*& head, int data){

    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node*& head, Node*& tail, int position, int data){
    if(position == 1){
        insertAtHead(tail, head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }


    // insert at end 
    if(temp -> next == NULL){
        insertAtTail(tail, head, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* &head){

    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    // deleting middle or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 13);
    print(head);

    insertAtHead(tail, head, 8);
    print(head);

    insertAtTail(tail, head, 25);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    insertAtPosition(head, tail, 1, 101);
    print(head);

    insertAtPosition(head, tail, 7, 102);
    print(head);

    deleteNode(3, head);
    print(head);
}