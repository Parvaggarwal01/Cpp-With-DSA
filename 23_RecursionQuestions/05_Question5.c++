// linear Search

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    // base case
    if(size == 0){
        return false;
    }

    // recursive case
    if(arr[0] == key){
        return true;
    } else {
        bool remain = search(arr+1, size-1, key);
        return remain;
    }
}

int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

    bool ans = search(arr, size, key);

    if(ans){
        cout << "Element found in array" << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
}