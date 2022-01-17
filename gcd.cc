#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int ans;
    if (a == 0)
    {
        ans = b;
    }
    else
    {
        ans = a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    int ans = gcd(a, b);

    cout << "GCD of " << a << " and " << b << " is: " << ans << endl;
    int lcm = (a * b) / ans;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
}
