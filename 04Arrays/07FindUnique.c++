#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the Size of Array: ";
    cin >> size;
    int arr[1000];

    cout << "Enter the value of Array " << endl;
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }

    cout << "Answer: " <<  ans << endl;

}