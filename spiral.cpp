#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> matrix{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    // cout << row << endl;
    int total = row * col;
    int count = 0;
    while (count < total)
    {
        int starting_Row = 0;
        int starting_Col = 0;
        int ending_Row = row - 1;
        int ending_Col = col - 1;

        for (int index = starting_Col; count < total && index <= ending_Col; index++)
        {
            ans.push_back(matrix[starting_Row][index]);
            count++;
        }
        starting_Row++;

        for (int index = starting_Row; count < total && index <= ending_Row; index++)
        {
            ans.push_back(matrix[index][ending_Col]);
            count++;
        }
        ending_Col--;

        for (int index = ending_Col; count < total && index >= starting_Col; index--)
        {
            ans.push_back(matrix[ending_Row][index]);
            count++;
        }
        ending_Row--;

        for (int index = ending_Row; count < total && index >= starting_Row; index--)
        {
            ans.push_back(matrix[index][starting_Col]);
            count++;
        }
        starting_Col++;
        cout << endl;
    }
}