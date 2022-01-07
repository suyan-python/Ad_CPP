#include <iostream>
using namespace std;

int Findpivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= 0)
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

int binary(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int findPosition(int arr[], int size, int key)
{
    int pivot = Findpivot(arr, size);

    //BS on second line
    if (key >= arr[pivot] && key < arr[size])
    {
        return binary(arr, size, key);
    }

    else
    {
        return binary(arr, size, key);
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int result = findPosition(arr, 5, 2);

    cout << "Index: " << result << endl;

    return 0;
}
