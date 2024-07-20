// Print Like A Wave

#include <iostream>
#include <vector>

using namespace std;

int waveprint(int arr[][3], int i, int j) {
    vector<int> ans;

    for(int col = 0; col<j; col++)
    {
        if( col&1 )
        {
            for(int row = i - 1; row>=0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {

            for(int row = 0; row<i; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
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

    cout << waveprint(arr, 3, 3) << endl;
}