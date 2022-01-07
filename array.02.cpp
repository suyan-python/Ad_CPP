//SWAP ALTERNATE
#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

int swap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    return 1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // int n = arr.size();
    // cout<< n<<endl;

    swap(arr, n);
    display(arr, n);

    swap(arr2, n2);
    display(arr2, n2);
    return 0;
}
