#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

public:
    string name;
    string company;
    int age;

} deta;

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int result = pivot(arr, 5);

    cout << "Pivot element at Index: " << result << endl;
}
