#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout << "Inside the Fuction" << endl;


    arr[0] = 120;

    for(int i =0; i<3; i++){
        cout << arr[i] << " ";
    } cout << endl;

    cout << "Going Back to main function" << endl;
}

int main(){
    int arr[3] = {1,2,3};

    update(arr, 3);

    cout << "Printing in main function" << endl;
    for(int i =0; i<3; i++){
        cout << arr[i] << " ";
    }
}