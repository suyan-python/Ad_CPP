#include <iostream>
#include <string.h>
using namespace std;

class Human
{
private:
    int weight;

public:
    string name;
    int age;
    int height;

    void setWeight(int w)
    {
        this->weight = w;
        cout << "Weight = " << w << endl;
    }

    void speaking()
    {
        cout << "Speaking" << endl;
    }
    Human()
    {
        cout << "Iam human" << endl;
    }
};

class Male : private Human
{
public:
    int getage()
    {
        return this->age;
    }

    string color;
    void sleep()
    {
        cout << "Male sleeping" << endl;
    }

    void weight()
    {
        setWeight(20);
    }
};

class Animal
{
public:
    void barking()
    {
        cout << "Barking" << endl;
    }
};

class Hybrid : public Human, public Animal
{
};

int main()
{
    // Hybrid obj;
    Human obj;
    obj.speaking();
    // obj.barking();
}
