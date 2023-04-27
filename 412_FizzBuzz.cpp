//https://leetcode.com/problems/fizz-buzz/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> output(n);
        for (int i = 1; i <= n; i++)
        {
            if (i >= 15)
            {
                if ((i % 15) == 0)
                {
                    output[i - 1] = "FizzBuzz";
                }
                else if ((i % 5) == 0)
                {
                    output[i - 1] = "Buzz";                        
                }
                else if ((i % 3) == 0)
                {
                    output[i - 1] = "fizz";
                }
                else
                {
                    output[i - 1] = to_string(i);
                }
            }
            else if ((i < 15) && (i >=5 ))
            {
                if ((i %  5) == 0)
                {
                    output[i - 1] = "Buzz"; 
                }
                else if ((i % 3) == 0)
                {
                    output[i - 1] = "fizz";
                }
                else
                {
                    output[i - 1] = to_string(i);
                }
            }
            else if ((i < 5) && (i >= 3))
            {
                if ((i  % 3) == 0)
                {
                    output[i - 1] = "fizz";
                }
                                else
                {
                    output[i - 1] = to_string(i);
                }
            }
            else
            {
                output[i - 1] = to_string(i);
            }
        }
     return output;   
    }
};

int main()
{
    int n = 3;
    vector<string> output;

   Solution obj;
   output = obj.fizzBuzz(n);

   for (int i = 0; i < n; i++)
   {
    cout << output[i] << ", ";
   }
    return 0;
}