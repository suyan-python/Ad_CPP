#include <bits/stdc++.h>
using namespace std;

int generateBinary(int digit)
{
    int ans = 0, i = 0;
    while (digit != 0)
    {
        int bit = digit & 1;
        ans = (bit * pow(10, i) + ans);
        i++;
        digit = digit >> 1;
    }
    return ans;
}

void print(double male, double female, int cnt)
{
    double chanceofMale = (double)(male / cnt) * 100;
    double chanceofFemale = (double)(female / cnt) * 100;
    cout << "Chance of having baby Boy: " << chanceofMale << "%" << endl;
    cout << "Chance of having baby Girl: " << chanceofFemale << "%" << endl
         << endl;
    cout << "!!!!!!!(This is with 80% accuracy)!!!!!!!!" << endl;
}

double countSetBits1(int n)
{
    double count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int digit;

    srand(time(NULL));
    digit = 100 + (rand() % 900);
    int ans = generateBinary(digit);

    cout << "\n---------Your Assume Genetic---------" << endl;
    cout << ans << endl;

    int cnt = 0;
    while (ans != 0)
    {
        cnt++;
        ans /= 10;
    }

    cout << "0 -> XX -> Female" << endl;
    cout << "1 -> XY -> Male" << endl;
    cout << "--------------------------------" << endl;

    double male = countSetBits1(digit);
    double female = cnt - male;

    print(male, female, cnt);

    cout << endl;
    cout << "------------------------------" << endl;
}
