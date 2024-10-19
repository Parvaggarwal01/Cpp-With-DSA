// fibonacci series using recursion

#include <iostream>
using namespace std;

int fib(int n) {
        // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

        // recursive case
    int ans = fib(n-1) + fib(n-2);
        return ans;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = fib(n);

    cout << "Fibonacci number at index " << n << " is: " << ans << endl;
    return 0;
}