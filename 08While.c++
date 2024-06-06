#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Print Value of N: ";
    cin >> N;

    int i = 2;
    
    while (i<N)
    {
        if(N%i == 0){
            cout << "Not Prime for : " << i << endl;
        }
        else{
            cout << "Prime for: " << i << endl;
        }
        i = i + 1;
    }
    
}