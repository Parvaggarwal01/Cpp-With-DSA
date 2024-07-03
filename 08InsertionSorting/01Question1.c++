#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = 0; 
        for(j = i-1; j>=0; j--){
            if(arr[j] >  temp){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}


int main(){
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    cout << "Mixed Array: ";
    for(int i = 0; i<7; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    insertionSort(arr, 7);
    cout << "Sorted Array: ";
    for(int i = 0; i<7; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}