#include <iostream>
#include <vector>

 using namespace std;

 void print(vector<int> arr, int n )
{
    for (int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    } cout  <<  endl;
}

 int main() {
    vector<int> nums;
    int k = 3;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);

    cout << "Array Before Rotating" << endl;
    print(nums, 7);

    vector<int> temp(7);

    for(int i = 0; i<7; i++){
        temp[(i+k)%7] = nums[i];
    }

    nums = temp;

    cout << "Array After Rotating" << endl;
    print(nums, 7);
 }