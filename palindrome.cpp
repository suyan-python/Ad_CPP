#include <iostream>
using namespace std;

int main()
{
    int num;
    int num2, remainder, result = 0;

    cout << "Give a number: ";
    cin >> num;

    num2 = num;
    while (num != 0)
    {
        remainder = num % 10;
        result = result * 10 + remainder;
        num /= 10;
    }
    if (result == num2)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palidrome" << endl;
    }

    return 0;
}