#include <iostream>
using namespace std;

int firstSearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    int ans = -1;
    if (s > e)
        return mid;

    if (arr[mid] == key)
    {
        ans = mid;
        e = mid - 1;
    }

    if (arr[mid] < key)
    {
        return firstSearch(arr, mid + 1, e, key);
    }
    else
    {
        return firstSearch(arr, s, mid - 1, key);
    }
    return ans;
}

int secondSearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    int ans = -1;
    if (s > e)
        return mid;

    if (arr[mid] == key)
    {
        ans = mid;
        s = mid + 1;
    }

    if (arr[mid] < key)
    {
        return secondSearch(arr, mid + 1, e, key);
    }
    else
    {
        return secondSearch(arr, s, mid - 1, key);
    }
    return ans;
}

int main()
{
    int arr[8] = {1, 2, 3, 3, 3, 3, 3, 5};
    int size = 8;
    int s = 0;
    int e = size - 1;
    int key = 3;

    int occ1 = firstSearch(arr, s, e, key);
    int occ2 = secondSearch(arr, s, e, key);
    cout << "First occurance at: " << occ1 << endl;
    cout << "Second occurance at: " << occ2 << endl;
}
