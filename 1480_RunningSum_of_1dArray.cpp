//https://leetcode.com/problems/running-sum-of-1d-array/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i <= nums.size() - 1; i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};