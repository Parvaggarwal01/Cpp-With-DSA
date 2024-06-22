// Peak Index in a Mountain Array

#include <iostream>
using namespace std;

int peakIndex(int arr[], int size) {
    int start = 0; 
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid + 1])
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


int main(){
    int even[4] = {0,10,5,2};

    cout << "Peak Index in array is " << peakIndex(even, 4) << endl;


    return 0;
}