#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> nums) {
    int count = 0;
    int n = nums.size();

    for(int i = 1; i<n; i++)
    {
        if(nums[i-1] > nums[i])
        {
            count++;
        }
    }

    if(nums[n-1] > nums[0])
    {
        count++;
    }
    return count <= 1;
}

int main() {
    vector<int> nums;

    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(2);

    if(check(nums) == 0){
        cout << "False" << endl;
    }
    else{
        cout << "True" << endl;
    }


}