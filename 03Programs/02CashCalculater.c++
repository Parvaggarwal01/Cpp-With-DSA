#include <iostream>
using namespace std;

int main() {
    int amount;

    cout << "Enter the total amount: ";
    cin >> amount;

    int hundreds = amount / 100;
    amount %= 100;
    
    int fifties = amount / 50;
    amount %= 50;
    
    int twenties = amount / 20;
    amount %= 20;
    
    int ones = amount;

    cout << "Number of 100s: " << hundreds << endl;
    cout << "Number of 50s: " << fifties << endl;
    cout << "Number of 20s: " << twenties << endl;
    cout << "Number of 1s: " << ones << endl;

    return 0;
}
