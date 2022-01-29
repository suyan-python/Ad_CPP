#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> > &ans)
    {
        //base case
        if (index >= nums.size())
            return;

        //exclude
        solve(nums, output, index + 1, ans);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int> > subsets(vector<int> &nums)
    {
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main()
{
    Solution stl;
    vector<int> nums;
    // nums.push_back(1);
    // nums.push_back(2);
    // nums.push_back(3);

    for (int i = 1; i <= 3; i++)
    {
        nums.push_back(i);
    }
    int n = nums.size();

    stl.subsets(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
