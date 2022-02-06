#include <iostream>
using namespace std;

int solve(int arr[], int n, int target)
{
    int start = 0;
    int end = start + 1;
    while ((start && end) <= n)
    {
        if ((arr[start] + arr[end]) == target)
        {
            return start && end;
        }
        start++;
        end++;
    }
    return -1;
}

int main()
{
    int arr[5] = {2, 7, 8, 9, 5};
    int n = 5;
    int target = 9;

    int result = solve(arr, n, target);
    cout << result << endl;
}
