//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;

        while (num != 0)
        {
            if ((num % 2) == 0)
            {
                num = (num/2);
            }
            else
            {
                num = (num - 1);
            }
            steps +=1;
        }
        return steps;
    }
};

int main()
{
    int num = 123;
    Solution obj;
    cout << endl << obj.numberOfSteps(num) << endl;
    return 0;
}