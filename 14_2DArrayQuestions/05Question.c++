// Search a 2D Matrix

#include <iostream>

using namespace std;
int searchMatrix(int matrix[][4], int i, int j, int target) {
    
    int row = i;
    int col = j;

    int start = 0;
    int end = row*col - 1;

    int mid = start + (end - start)/2;

    while(start<=end)
    {
        int elm = matrix[mid/col][mid%col];

        if(elm == target)
        {
            return 1;
        }
        else if(elm < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return 0;
}


int main() {
    int arr[3][4];

    cout << "Enter the elements" << endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the elements" << endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter the Number you want to find: ";
    cin >> target;

    int ans = searchMatrix(arr, 3, 4, target);

    if(ans == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}