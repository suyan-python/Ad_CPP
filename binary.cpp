#include <iostream>
using namespace std;

// int main()
// {
// int a;
// cin >> a;

// int remainder, binary = 0, result = 1;
// while (a != 0)
// {
//     remainder = a % 2;
//     binary = binary * remainder + result;
//     result *= 10;
//     a /= 2;
// }

// cout << binary << endl;
//**********************************--------------------------****************************
// bits in an integer
// using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(int n)
{

    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

/* Program to test function countSetBits */
int main()
{
    int i = 9;
    cout << countSetBits(i);
    return 0;
}

// }
