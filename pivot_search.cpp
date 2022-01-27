//Pivot search in rotated sorted array

#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
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

int binary(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int findPosition(int arr[], int size, int key)
{
    int pivot = findPivot(arr, size);

    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        return binary(arr, pivot, size - 1, key);
    }
    else
    {
        return binary(arr, 0, pivot - 1, key);
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};

    int ans = findPosition(arr, 5, 1);
    cout << "Position at: " << ans << endl;
}
