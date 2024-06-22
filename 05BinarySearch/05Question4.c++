// Find Pivot Index

#include <iostream>
using namespace std;

int pivotIndex(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum =  sum + arr[i];
    }
    int right = sum;
    int left = 0;
    for(int i = 0; i<=size; i++){
        right = sum - left - arr[i];
        if(right == left)
        {
            return i;
        }
        left += arr[i];
    }
    return -1;

}


int main(){
    int even[6] = {1,7,3,6,5,6};

    cout << "Pivot Index in array is " << pivotIndex(even, 6) << endl;


    return 0;
}