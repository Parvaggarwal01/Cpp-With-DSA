// search in rotated sorted array

#include <iostream>
using namespace std;

int pivotIndex(int arr[], int size) {
    
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        } 
        else 
        {
            end = mid; 
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s; 
    int end = e;

    int mid = start + (end - start)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid; 
        }

        if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid =  start + (end - start)/2;
    }
    return -1;
}

int main(){
    int arr[4] = {8, 9, 4, 5};
    int key = 4;
    int pivot = pivotIndex(arr, 4);
    if(arr[pivot] >= key && key <= arr[3])
    {
        cout << binarySearch(arr, pivot, 3, key) << endl;
    }
    else 
    {
        cout << binarySearch(arr, 0, pivot-1, key) << endl;
    }
}