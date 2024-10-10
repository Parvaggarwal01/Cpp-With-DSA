#include <iostream>
#include <stack>


using namespace std;


void solve(stack<int>& s, int x){
    // base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, x);
    s.push(num);
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
void pushAtBottom(stack<int>& s, int x) 
{
    // Write your code here.
    solve(s,x);
    Print(s);
}


int main(){
    stack<int> s1;
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    int x;
    cout << "Enter the number you want to push at bottom: ";
    cin >> x;

    pushAtBottom(s1, x);
    
}