#include <iostream>
using namespace std;

int binary(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        //int mid = (start + end) / 2;
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[5] = {2, 4, 6, 8, 10};
    int key;

    cout << "Enter key to search: ";
    cin >> key;

    int result = binary(even, 5, key);
    cout << "Index of " << key << " is " << result << endl;

    return 0;
}
