#include <iostream>
using namespace std;

int recursion(int n, string arr[])
{
    if (n == 0)
        return 1;

    int digit = n % 10;
    n /= 10;

    recursion(n, arr);
    cout << arr[digit] << " ";

    return digit;
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six",
                      "seven", "eight", "nine"};

    int n;
    cin >> n;

    recursion(n, arr);

    cout << endl;
}
