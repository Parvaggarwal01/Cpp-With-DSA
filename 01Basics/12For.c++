#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    cout << "Printing Sum from 1 to " << n << endl;
    for(int i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum: " << sum << endl;
}