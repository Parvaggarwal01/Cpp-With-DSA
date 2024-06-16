#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start =0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    cout << "Printing Normal Array" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printReverseArray(int arr[], int n){
    cout << "Printing Reversed Array" << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    printArray(arr, 6);
    printArray(brr, 5);

    reverse(arr, 6);
    reverse(brr, 5);

    printReverseArray(arr, 6);
    printReverseArray(brr, 5);
}