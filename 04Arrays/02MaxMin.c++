#include <iostream>
using namespace std;

int getMax(int num[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        // Method 1

        maxi = max(maxi, num[i]);

        //Method 2

        // if(num[i] > max){
        //     max = num[i];
        // }
    }

    return maxi;
}

int getMin(int num[], int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        // Method 1
        
        mini = min(mini, num[i]);

        //Method 2

        // if(num[i] < min){
        //     min = num[i];
        // }
    }

    return mini;
}

int main(){
    int size;
    cout << "Enter the Size of Array: ";
    cin >> size;
    cout << endl;

    int num[100];

    cout <<"Enter the value of array" << endl;
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout << "Maximun value is " << getMax(num, size) << endl;
    cout << "Minmum value is " << getMin(num, size) << endl;

}