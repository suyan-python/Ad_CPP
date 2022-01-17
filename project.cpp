#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int addition(int a, int b)
{
    return (a + b);
}

int subtraction(int a, int b)
{
    return (a - b);
}

int multi(int a, int b)
{
    return (a * b);
}

int division(int a, int b)
{
    return (a / b);
}
//------------------------------------------------------------------

double sqare(int a)
{
    return pow(a, 2);
}

double cube(int a)
{
    return pow(a, 3);
}

double power(int a, int b)
{
    return pow(a, b);
}

double sq_root(int a)
{
    return sqrt(a);
}

double fact(int a)
{
    int n = 1;
    while (a > 1)
    {
        n *= a;
        a--;
    }
    return n;
}

double sin(double a)
{
    float x = sin(a);
    return x;
}

// double cos(int a)
// {
//     return cos(a);
// }

// double tan(int a)
// {
//     return tan(a);
// }
//------------------------------------------------------------------
int main()
{
    // float result = sin(60);
    cout << sin(45) << endl;
}
