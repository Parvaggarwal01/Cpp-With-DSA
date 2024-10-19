//  Count Ways To Reach The N-th Stairs

#include <iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    //  Write your code here.
    // base case
    if(nStairs < 0){
        return 0;
    }

    if(nStairs == 0){
        return 1;
    }

    // recursive case
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);

    return ans;
    
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = countDistinctWays(n);

    cout << "Number of distinct ways: " << ans << endl;
}