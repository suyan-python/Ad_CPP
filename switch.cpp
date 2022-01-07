#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cout << "Give a number: " << endl;
    // cin >> num;

    // // switch (num)
    // // {
    // // case 1:
    // //     cout << "ONE" << endl;
    // //     break;

    // // case 2:
    // //     cout << "Two" << endl;
    // //     break;

    // while (num != 0)
    // {
    //     switch (num)
    //     {
    //     case 3:
    //         cout << "Three" << endl;
    //         exit(0);
    //     default:
    //         cout << "Not Three" << endl;
    //         exit(0);
    //     }
    // }

    // int a, b;
    // char op;
    // cout << "Enter 1st number: ";
    // cin >> a;

    // cout << "Enter 2nd number: ";
    // cin >> b;

    // cout << "Which Operation: ";
    // cin >> op;

    // switch (op)
    // {
    // case '+':
    //     cout << a + b << endl;
    //     break;

    // case '-':
    //     cout << a - b << endl;
    //     break;

    // case '*':
    //     cout << a * b << endl;
    //     break;

    // case '/':
    //     cout << a / b << endl;
    //     break;

    // default:
    //     cout << "Enter valid operation" << endl;
    // }

    int amount = 0, hundred = 0, fifty = 0, twenty = 0, ten = 0, one = 0, modulus = 0, remainder = 1;

    cout << "Plaese enter the amount" << endl;
    cin >> amount;

    switch (1)
    {
    case 1:
        hundred = amount / 100;
        remainder = amount % 100;
        cout << "The number of hundred's note is " << hundred << endl;

    case 2:
        fifty = remainder / 50;
        remainder = remainder % 50;
        cout << "The number of fifty's note is " << fifty << endl;

    case 3:
        twenty = remainder / 20;
        remainder = remainder % 20;
        cout << "The number of twenty's note is " << twenty << endl;

    case 4:
        ten = remainder / 10;
        remainder = remainder % 10;
        cout << "The number of ten's note is " << ten << endl;

    case 5:
        one = remainder / 1;
        remainder = remainder % 1;
        cout << "The number of one's coin is " << one << endl;
    }
    return 0;
}
