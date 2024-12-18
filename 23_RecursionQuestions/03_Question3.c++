// Say Digit

#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    // base case
    if(n == 0){
        return;
    }

    int digit = n%10;
    n = n/10;
    
    // recursive case
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main(){

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << endl;
    sayDigit(n, arr);
    cout << endl;
}