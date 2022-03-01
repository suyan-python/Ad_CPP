#include <iostream>
using namespace std;

int disapp(int *arr, int size)
{
    int store, nums[size];
    for (int i = 1; i <= size; i++)
    {
        nums[i] = nums[i];
    }

    for (int i = 1; i <= size; i++)
    {
        if (nums[i] == arr[i])
        {
            store = i;
            cout << store << endl;
        }
    }

    return store;
}

int main()
{
    int arr[8] = {5, 4, 7, 8, 6, 3, 2, 1};
    int size = 8;

    disapp(arr, size);
}