#include <iostream>
using namespace std;

bool isPrime(int n){

    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}



int main(){
    int a;
    cout << "Enter the value of Number you want to find its is Prime or Not: ";
    cin >> a;
    cout << endl;

    int ans = isPrime(a);
    if(ans == 1){
        cout << a << " is a Prime Number." << endl;
    } else {
        cout << a << " is Not a Prime Number." << endl;
    }
}