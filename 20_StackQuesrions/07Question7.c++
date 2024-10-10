// Redundancy brackets

#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;

    for(int i = 0; i<s.length(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            if(ch == ')') {
                bool isRedundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }

                if(isRedundant == true){
                    return true;
                } 
                st.pop();
            }
        }
    }
    return false;
}


int main(){
    string s = "((a+b)*(c-d))";
    bool redundant = findRedundantBrackets(s);

    if(redundant){
        cout << "Redundant Brackets Found" << endl;
    } else{
        cout << "No Redundant Brackets Found" << endl;
    }
    return 0;   
}