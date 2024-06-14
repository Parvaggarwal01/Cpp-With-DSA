#include <iostream>
using namespace std;

void dummy(int n) {
    n++;
    cout << "n is " << n << endl;
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    dummy(n);

    cout << "Number n is " << n <<  endl;

}