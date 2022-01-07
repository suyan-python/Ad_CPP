#include <iostream>
using namespace std;

// int peak(int arr[], int size)
// {
//     return start;
// }

int main()
{
    int arr[5] = {1, 5, 3, 3, 2};
    // int result = peak(arr, 5);
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    cout << "Peak element Index: " << end << endl;

    return 0;
}
