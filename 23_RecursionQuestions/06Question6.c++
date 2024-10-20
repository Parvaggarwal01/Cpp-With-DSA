// Binary Search using recursion

#include <iostream>
using namespace std;

bool search(int arr[], int s, int e, int k){
    // base case
    if(s>e){
        return false;
    } 


    int mid = s + (e-s)/2;


    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        return search(arr, mid+1, e, k);
    } else {
        return search(arr, s, mid-1, k);
    }

}

int main(){
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;

    cout << "Present or not: " << search(arr, 0, size-1, key) << endl;

}


