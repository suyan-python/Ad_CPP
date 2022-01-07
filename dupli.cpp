#include <iostream>
using namespace std;

int remove(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans ^= i;
    }
    cout << "Given elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "\nDuplicate element: " << ans << endl;
    return 1;
}

int main()
{
    int num[6] = {1, 2, 3, 4, 5, 5};
    remove(num, 6);
    return 0;
}
