#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printng the array Using Funtion" << endl;

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Printng DONE" << endl;
}

int main(){
    int number[15];

    cout << "Value at 0 index: " << number[0] << endl;

    int second[3] = {5, 7, 11};

    cout << "Value at 3 index: " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;
    printArray(third, 15);

    int forth[10] = {0};

    int m = 10;
    printArray(forth, 10);

    int fifth[10];

    cout << "Printing the array" << endl;

    int o = 10;
    for(int i = 0; i<o; i++){
        fifth[i] = 1;
    }
    for(int i = 0; i<o; i++){
        cout << fifth[i] << " ";
    }
}