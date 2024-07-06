#include <iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int i = 0;

    for(int j = 0; j<n; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void print(int arr[], int n )
{
    for (int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    } cout  <<  endl;
}

int main() {
    int arr[6] = {0, 1, 0, 3, 12, 0};

    cout << "Printing Normal Array" << endl;
    print(arr, 6);

    moveZeros(arr, 6);
    cout << "Printing Move Zero Array" << endl;
    print(arr, 6);
}