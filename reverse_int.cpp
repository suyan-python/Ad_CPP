#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cout << "Give a number: ";
    cin >> n;

    while (n != 0)
    {
        int remainder = n % 10;
        result = result * 10 + remainder;
        n /= 10;
    }
    cout<<result<<endl;

    return 0;
}