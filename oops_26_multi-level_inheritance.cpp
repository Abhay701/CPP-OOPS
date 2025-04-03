#include <iostream>
using namespace std;

class Animal
{
public:
    int age = 21;
    int weight = 55;

public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

class Dog : public Animal
{
};

class GermanShepher : public Dog
{
};

int main()
{
    Dog d;
    d.speak();
    cout << "Age = " << d.age << endl;
    cout << "Weight = " << d.weight << endl;

    cout << endl;
    GermanShepher g;
    g.speak();
    cout << "Age = " << g.age << endl;
    cout << "Weight = " << g.weight << endl;

    return 0;
}