//https://leetcode.com/problems/ransom-note/

#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        bool output = false;
        int temp = 0;

        if(magazine.length() < ransomNote.length())
        {
            return output;
        }

        for(int i = 0; i <= magazine.length() - 1; i++)
        {
            if(ransomNote.length() != 0)
            {
                temp =   ransomNote.find(magazine[i]);  
                if (temp >= 0)
                {
                    ransomNote.erase(temp, 1);
                }
                
            }
        }

        if (ransomNote.length() == 0)
        {
            output = true;
        }
        return output;
    }
};

int main()
{
    string A = "fihjjjjei";
    string B = "hjibagacbhadfaefdjaeaebgi";
    Solution obj;

    if (obj.canConstruct(A, B))
    {
        cout <<"TRUE";
    }
    else 
    {
        cout << "false";
    }
    
    return 0;
}