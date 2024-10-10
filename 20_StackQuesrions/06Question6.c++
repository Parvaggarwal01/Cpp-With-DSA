// Sort a Stack

#include <iostream>
#include <stack>

using namespace std;

void sortedInsert(stack<int> &s, int num){
	// base case
	if(s.empty() || (!s.empty() && s.top() < num)){
		s.push(num);
		return;
	}

	int n = s.top();
	s.pop();

	// recursive call
	sortedInsert(s, num);

	s.push(n);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	// base case 
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	//recurx=sive call
	sortStack(stack);

	sortedInsert(stack, num);
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
    stack<int> s1;
    s1.push(5);
    s1.push(3);
    s1.push(7);
    s1.push(2);
    s1.push(9);
    
    cout << "Printing Stack before sorting: ";
    Print(s1);
    cout << endl;
    sortStack(s1);
    cout << "Printing Stack after sorting: ";
    Print(s1);
    cout << endl;
}