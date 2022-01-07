#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     //for printing space
    //     for (int space = n - i; space!=0; space--)
    //     {
    //         cout << " ";
    //     }
    //     //for printing star
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     // int star= n - i;
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {

    //     for (int space = n - i; space ; space--)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        //for space
        for (int space = n - i; space; space--)
        {
            cout << " ";
        }

        //for mid triangle
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        //for last triangle
        for (int k = i - 1; k; k--)
        {
            cout << k;
        }
        cout << endl;
    }
    
    return 0;
}
