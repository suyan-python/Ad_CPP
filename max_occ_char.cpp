#include <iostream>
using namespace std;

char getMaxOccurance(string s)
{

    int arr[20] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
    }
}

int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;
}