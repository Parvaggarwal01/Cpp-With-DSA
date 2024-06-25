// Aggressive Cow Problem

#include <iostream>
using namespace std;

bool isPossible(int stalls[], int n, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i =0; i<n; i++)
    {

        if(stalls[i]-lastPos >= mid)
        {
            cowCount++;
            if(cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int n, int k)
{
    sort(stalls, stalls+n);
    int s = 0;
    int maxi = -1;
    for(int i =0; i<n; i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossible(stalls, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[5] = {4, 2, 1, 3, 6};
    int k = 2;
    int n = 5;
    cout << "Answer: " << aggressiveCows(arr, n, k) << endl;
}