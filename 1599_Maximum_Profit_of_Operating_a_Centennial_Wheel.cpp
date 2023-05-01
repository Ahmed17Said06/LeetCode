// https://leetcode.com/problems/maximum-profit-of-operating-a-centennial-wheel/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int minOperationsMaxProfit(vector<int> &customers, int boardingCost, int runningCost)
    {
        int Rotations = 0;
        int onBoarded = 0;
        int waiting = 0;
        vector<int> cost;
        int myMax = -1000;

        for (int i = 0; i < customers.size(); i++)
        {
            if (waiting >= 4)
            {
                waiting -= 4;
                onBoarded += 4;
                waiting += customers[i];
            }
            else
            {
                waiting += customers[i];
                if (waiting >= 4)
                {
                    onBoarded += 4;
                    waiting -= 4;
                }
                else
                {
                    onBoarded += waiting;
                    waiting = 0;
                }
            }
            Rotations++;
            cost.push_back((onBoarded * boardingCost) - (Rotations * runningCost));
            myMax = max(myMax, cost.back());
        }
        while (waiting != 0)
        {
            if (waiting >= 4)
            {
                onBoarded += 4;
                waiting -= 4;
            }
            else
            {
                onBoarded += waiting;
                waiting = 0;
            }
            Rotations++;
            cost.push_back((onBoarded * boardingCost) - (Rotations * runningCost));
            myMax = max(myMax, cost.back());
        }
        if (myMax <= 0)
        {
            return -1;
        }
        else
        {
            auto times = find(cost.begin(), cost.end(), myMax);
            return (times - cost.begin()) + 1;
        }
    }
};