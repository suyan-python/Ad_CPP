// TO FIND THE TYPE OF AN INPUT CHARACTER

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any character" << endl;
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "This is lowercase alphabet" << endl;
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "This is uppercase alphabet" << endl;
    }
    else if (ch >= 48 && ch <= 58)
    {
        cout << "This is a numeric number" << endl;
    }
    else
    {
        cout << "Wrong input" << endl;
    }
    return 0;
}