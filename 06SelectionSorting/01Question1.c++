#include <iostream>
using namespace std;

int main(){
    int arr[5] = {6, 2, 8 ,4, 10};
    cout << "Mixed Array: ";
    for(int i = 0; i<5; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i<5-1; i++){
        int minIndex = i;

        for(int j = i+1; j<5; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    cout << "Sorted Array: ";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}