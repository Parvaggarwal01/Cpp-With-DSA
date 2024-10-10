// Delete middle element from stack

#include <iostream>
#include <stack>
using namespace std;


void solve(stack<int>&inputStack, int size, int count){
   // base case 
   if(count == size/2){
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();

   //recursive call
   solve(inputStack,  size,  count+1);

   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   solve(inputStack, N, count );
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

int main(){
    // creation of stack
    stack <int> s;

    // push operation
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    
    cout << "Printing Stack before deletion: ";
    Print(s);
    cout << endl;

    deleteMiddle(s, 5);

    cout << "Printing Stack after deletion: ";
    Print(s);
    cout << endl;

    return 0;
}