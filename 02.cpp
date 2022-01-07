#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter value of n" << endl;
    // cin >> n;
    // cout << "The value of n is: " << n << endl;
    // if (n > 0)
    // {
    //     cout << "N is positive" << endl;
    // }
    // else if (n == 0)
    // {
    //     cout << "N is NULL/0" << endl;
    // }
    // else
    // {
    //     cout << "N is negative" << endl;
    // }

    // int a, b;
    // cout << "Enter value of a" << endl;
    // cin >> a;

    // cout << "Enter value of b" << endl;
    // cin >> b;

    // if (a > b)
    // {
    //     cout << "Value of a is greater than b " << a << ">" << b << endl;
    // }
    // else
    // {
    //     cout << "Value of b is greater than a " << b << ">" << a << endl;
    // }

    int pat;
    cin >> pat;
    for (int i = 0; i < pat; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}
