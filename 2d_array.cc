#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        cin >> arr[i][0];
        // }
    }
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        cout << arr[i][0] << " ";
        // }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
