#include <iostream>
using namespace std;

int isEven(int a){
    if(a%2==0){
        return 1;
    }
    else {
        return 0;
    }
}


int main(){
    int a;
    cout << "Enter the Number you want to check: ";
    cin >> a;
    cout << endl;
    int answer = isEven(a);

    if(answer == 1){
        cout << "Number is Even" << endl;
    } else{
        cout << "Number is Odd" << endl;
    }
    
}