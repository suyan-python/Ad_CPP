// phone Keypad

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Keypad
{

private:
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
    {
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombination(string &digits)
    {
        vector<string> ans;

        if (digits.length() == 0)
            return ans;

        string output = "";
        int index = 0;
        string mapping[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, output, index, ans, mapping);
        for (int i = 0; i <= sizeof(mapping); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return ans;
    }
};

int main()
{
    Keypad key;
    string digits = "23";
    key.letterCombination(digits);
    // for (int i = 0; i < digits.length(); i++)
    // {
    //     cout << digits[i] << " ";
    // }
    cout << endl;
}