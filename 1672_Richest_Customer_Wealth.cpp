//https://leetcode.com/problems/richest-customer-wealth/

#include<vector>
#include<numeric>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int max = 0;

        for (int i = 0;  i <= accounts.size() - 1; i++){
            if (accumulate(accounts[i].begin(), accounts[i].end(), 0) > max) {
                max = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            }
        }
        return max;
    }
};