#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,ans = 0, i = 0;
    cout<<"Enter number in binary"<<endl;
    cin>>num;

    while(num !=0){
        int digit = num % 10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        num /= 10;
        i++;

    }
    cout<<"Decimal: "<< ans<<endl;


    return 0;
}