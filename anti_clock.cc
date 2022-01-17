// Rotating matrix by 90 degree in Anticlockwise direction in C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    // for (int i = 0; i < n / 2; i++)
    // {
    //     for (int j = i; j < n - i - 1; j++)
    //     {
    //         // Swapping elements after each iteration in Anticlockwise direction
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][n - i - 1];
    //         arr[j][n - i - 1] = arr[n - i - 1][n - j - 1];
    //         arr[n - i - 1][n - j - 1] = arr[n - j - 1][i];
    //         arr[n - j - 1][i] = temp;
    //     }
    // }

    // Printing matrix elements after rotation
    cout << "\nMatrix after rotating 90 degree anticlockwise:\n";
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
