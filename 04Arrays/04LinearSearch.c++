#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for (int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10]= {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the element to search for: ";
    int key;
    cin >> key;
    cout << endl;

    bool found = search(arr, 10, key); 
    if(found){
        cout << key << " is Present in Array" << endl;
    } else{
        cout << key << " is not Present in Array" << endl;
    }
}