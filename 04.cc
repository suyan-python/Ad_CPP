#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int value = i;
    //     while (j <= i)
    //     {
    //         cout << value;
    //         value++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     int value = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << value;
    //         value++;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }

    return 0;
}
