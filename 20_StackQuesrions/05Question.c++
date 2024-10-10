// Reverse stack using recusion 

#include <iostream>
#include <stack>


using namespace std;
void insertAtBottom(stack<int> &stack, int element){
    // base case
    if(stack.empty()){
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, element);

    stack.push(num);
}

void Print(stack<int> s){
    if(s.empty()){
        return;
    }

    int x = s.top();

    s.pop();

    Print(s);

    cout << x << " ";

    s.push(x);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    // base case 
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // recusive call;
    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main(){
    stack<int> s1;
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    
    cout << "Printing Stack before reversing: ";
    Print(s1);
    cout << endl;
    reverseStack(s1);
    cout << "Printing Stack after reversing: ";
    Print(s1);
    cout << endl;
}