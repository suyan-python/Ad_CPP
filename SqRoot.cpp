#include <iostream>
using namespace std;

int sqRoot(int key)
{
    int start = 0.0;
    int end = key;
    int mid = start + (end - start) / 2;
    int ans = -1.0;

    while (start <= end)
    {
        int square = mid * mid;
        if ((square) == key)
        {
            return mid;
        }
        else if ((square) > key)
        {
            end = mid - 1;
        }
        else if ((square) < key)
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double decimals(int key, int deci_num, int sqRoot)
{
    double factor = 1;
    double ans = sqRoot;

    for (int i = 0; i < deci_num; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < key; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int result = sqRoot(37);
    cout << "Square Root : " << result << endl;
    cout << "Presize SqRoot : " << decimals(37, 4, result) << endl;
}
