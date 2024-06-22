// Find Total Number of Occurrence 

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0; 
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end) 
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else if(arr[mid] > key) 
        {
            end = mid - 1;
        } 

        mid = start + (end - start)/2;
    }
    return ans;  
}

int lastOcc(int arr[], int size, int key) {
    int start = 0; 
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end) 
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else if(arr[mid] > key) 
        {
            end = mid - 1;
        } 

        mid = start + (end - start)/2;
    }
    return ans;  
}

int main(){
    int even[13] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};

    int first = firstOcc(even, 13, 3);
    int last = lastOcc(even, 13, 3);

    int total = (last - first) + 1;

    cout << "Total Number of Occurrence of 3 is " <<  total << endl;

    return 0;
}