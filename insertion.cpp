#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 2, 6, 5, 8, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j++)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}