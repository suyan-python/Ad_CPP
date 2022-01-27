#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (s > e)
        return false;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 18};
    int size = 6;
    int s = 0;
    int e = size - 1;
    int key = 16;

    int ans = binarySearch(arr, s, e, key);

    if (ans)
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not found" << endl;
}