#include <iostream>

using namespace std;

bool recurSort(int arr[], int size)
{
    if (arr[0] == 0 || arr[1] == 0) // base case
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        int remainingPart = recurSort(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    int boolen = recurSort(arr, size);

    if (boolen)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
}