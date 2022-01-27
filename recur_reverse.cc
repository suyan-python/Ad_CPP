//REVERSE AND CHECK PALINDROME

#include <iostream>
#include <string.h>
using namespace std;

void reverse(string &arr, int i)
{
    int n = arr.length() - 1;
    int j = n - i;

    if (i > j)
        return;

    swap(arr[i], arr[j]);
    i++;
    j--;

    reverse(arr, i);
}

int main()
{
    string arr = "abcde";
    int i = 0;
    string arr2 = arr;
    cout << "\nGiven string: " << arr << endl;
    // int j = arr.length() - 1;

    reverse(arr, i);
    cout << "Reverse string: " << arr << endl;
    if (arr2 == arr)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}
