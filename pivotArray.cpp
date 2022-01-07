#include <iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int result = pivot(arr, 5);
    cout << "Pivot element Index: " << result << endl;

    return 0;
}
