#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    while (num != 0)
    {
        if (num & 1)
        {
            count++;
        }
            num = num >> 1;
    }
    cout << count << endl;

    return 0;
}
