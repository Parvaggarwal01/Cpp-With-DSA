#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << endl;

    char op;
    cout << "Enter the Operation you want to perform: ";
    cin >> op;
    cout << endl;

    switch (op)
    {
    case '+': cout << "Addition: " << (a+b) << endl;
        break;

    case '-' : cout << "Subtraction: " << (a-b) << endl;
        break;

    case '*': cout << "Multiplication: " << (a*b) << endl;
        break;

    case '/': cout << "Division: " << (a/b) << endl;
        break;

    case '%': cout << "Reminder: " << (a%b) << endl;
        break;
    
    default: cout << "Please Enter a valid Operation!";
        break;
    }
}