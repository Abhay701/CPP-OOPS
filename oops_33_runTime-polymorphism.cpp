#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

class Dod : public Animal
{
public:
    void speak()
    {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Mew..Mew..." << endl;
    }
};

int main()
{
    Dod d;
    Cat c;
    d.speak();
    c.speak();
    return 0;
}