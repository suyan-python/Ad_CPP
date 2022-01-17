#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void Introduce()
    {
        cout << "Name-> " << Name << endl;
        cout << "Company-> " << Company << endl;
        cout << "age-> " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee deta1 = Employee("Suyan", "Startup", 13);
    deta1.Introduce();

    Employee deta2 = Employee("Harry", "Enddown", 30);
    deta2.Introduce();
}
