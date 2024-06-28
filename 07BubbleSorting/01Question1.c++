#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i =1; i<n; i++)
    {
        for(int j = 0; j<n-1; j++){
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {6,2,8,4,10};
    cout << "Mixed Array: ";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, 5);
    cout << "Sorted Array: ";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}