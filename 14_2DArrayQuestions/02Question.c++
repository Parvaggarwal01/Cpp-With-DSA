// Largest Row Wise Sum

#include <iostream>

using namespace std;

void printSum(int arr[][3], int row, int col) {

    cout << "Printing Sum" << endl;
    for(int i = 0; i<3; i++)
    {
        int sum = 0;
        for(int j = 0; j<3; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": ";
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int num = -1;

    for(int i = 0; i<3; i++)
    {
        int sum = 0;
        for(int j = 0; j<3; j++)
        {
            sum += arr[i][j];
        }

        if(sum > maxi) {
            maxi = sum;
            num = i;
        }
    }

    cout << "The Maximum sum is " << maxi  << endl;
    
    return num;

}

int main() {
    int arr[3][3];

    cout << "Enter the elements" << endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the elements" << endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printSum(arr, 3, 3);
    int ans = largestRowSum(arr, 3, 3);
    cout << "The Maximum Sum is at ROW: " << ans + 1 << endl;
}