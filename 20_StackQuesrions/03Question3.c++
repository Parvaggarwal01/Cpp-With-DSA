// Valid Parentheses

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> c;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];

        // if opening bracket, strack push
        // if close bracket, stack top check and pop
        if(ch == '(' || ch == '{' || ch == '['){
            c.push(ch);
        } else {
            // for closing bracket
            if (!c.empty()) {
              char top = c.top();
              if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
                  (ch == ']' && top == '[')) {
                c.pop();
              } else {
                return false;
              }
            } else {
              return false;
            }
        }
    }
    if(c.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s = "[()]{}{[()()]()}";
    int ans = isValidParenthesis(s);

    if(ans == 1){
        cout << "Balanced" << endl;
    } else{
        cout << "Not Balanced" << endl;
    }
}