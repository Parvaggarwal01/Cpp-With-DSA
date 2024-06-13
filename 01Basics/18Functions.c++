#include <iostream>
using namespace std;

int power(int a, int b){
    
    int ans = 1;

    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    int a , b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << endl;

    int answer = power(a, b);
    cout << "Power: " << answer << endl;
}