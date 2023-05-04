//Star 
//Meduim

// https://leetcode.com/problems/first-completely-painted-row-or-column/

//Used 4 hashmaps 2 to store the row number and the column number of each value in the matrix, 
//and another 2 to track how many visited each row and each column.
//Row is fully visited if it was visited by the number of the array columns and a column is fully visited if it was vsisted by the number or array rows. 


#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_map>

using namespace std;

class Solution
{ 
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        unordered_map<int, int> Rows, Cols, VisitedRows, VisitedCols;

        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                Rows[mat[i][j]] = i;
                Cols[mat[i][j]] = j;
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            VisitedRows[Rows[arr[i]]]++;
            VisitedCols[Cols[arr[i]]]++;

            if ((VisitedRows[Rows[arr[i]]] == mat[0].size()) || (VisitedCols[Cols[arr[i]]] == mat.size()))
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    vector<int> arr = {6,1,3,5,2,4};
    vector<vector<int>> mat = {{1,6,4}, {2,3,5}};

    // vector<int> arr = {8,2,4,9,3,5,7,10,1,6};
    // vector<vector<int>> mat = {{8,2,9,10,4},{1,7,6,3,5}};
    Solution obj;
    cout << obj.firstCompleteIndex(arr, mat) << endl;
}