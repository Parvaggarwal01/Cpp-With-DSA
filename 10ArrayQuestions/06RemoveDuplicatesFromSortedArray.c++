// Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    } cout << endl;
}

int removeDuplicates(vector<int>& nums) {
    int j = 1;

    for(int i = 1; i<nums.size(); i++)
    {
        if(nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
void printAfter(vector<int> v, int k) {
    for(int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    } cout << endl;
}

int main() {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);

    cout << "Array before removing: "<< endl;
    print(nums);
    cout << endl;

    int k = removeDuplicates(nums);

    cout << "Unique Elements: " << k << endl;
    cout << endl;

    cout << "Array after removing: "<< endl;
    printAfter(nums, k);
}