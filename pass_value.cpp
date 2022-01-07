#include <iostream>
using namespace std;

int update(int n)
{

    n = n / 5;
    return n;
}

int main()
{
    int n = 10;
    update(n);
    cout << n << endl;
    return 0;
}
