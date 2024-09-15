#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory Free for node for data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    // empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        //non-empty list
        // assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr -> next;
        }

        //element found -> curr is representing element
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;

}

int main(){

    Node* tail = NULL;

    // empty list me insert kar rahe hai
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
}