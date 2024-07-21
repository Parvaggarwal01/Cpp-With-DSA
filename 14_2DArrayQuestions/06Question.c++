// Search a 2D Matrix II

#include <iostream>

using namespace std;
int searchMatrix(int matrix[][5], int i, int j, int target) {
    
    int row = i;
    int col = j;

    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex>=0)
    {
        int elm = matrix[rowIndex][colIndex];
        if(elm == target)
        {
        return 1;
        }
        else if(elm < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}


int main() {
    int arr[5][5];

    cout << "Enter the elements" << endl;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the elements" << endl;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter the Number you want to find: ";
    cin >> target;

    int ans = searchMatrix(arr, 5, 5, target);

    if(ans == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}