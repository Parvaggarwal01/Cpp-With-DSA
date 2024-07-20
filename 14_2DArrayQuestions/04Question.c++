// Spiral Matrix

#include <iostream>
#include <vector>

using namespace std;
int spiralOrder(int matrix[][3], int i, int j) {

        vector<int> ans;
        
        int row = i;
        int col = j;

        int count = 0;
        int total = row*col;

        int srow = 0;
        int scol = 0;
        int erow = row-1;
        int ecol = col-1;

        while(count < total) {

            for(int index = scol; count < total && index<=ecol; index++)
            {
                ans.push_back(matrix[srow][index]);
                count++;
            }
            srow++;

            for(int index = srow; count < total && index<=erow; index++)
            {
                ans.push_back(matrix[index][ecol]);
                count++;
            }
            ecol--;

            for(int index = ecol; count < total && index>=scol; index--)
            {
                ans.push_back(matrix[erow][index]);
                count++;
            }
            erow--;

            for(int index = erow; count < total && index>=srow; index--)
            {
                ans.push_back(matrix[index][scol]);
                count++;
            }
            scol++;
        }
        
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
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

    cout << spiralOrder(arr, 3, 3) << endl;
}