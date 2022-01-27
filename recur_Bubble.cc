#include <iostream>
using namespace std;

void sortArray(int *arr, int size)
{
    if (size == 0 || size == 1)
        return;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, size - 1);
}

int main()
{
    int arr[5] = {4, 3, 2, 1, 9};
    int size = 5;

    sortArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
