#include <iostream>
using namespace std;

class Animal
{
public:
    int age = 21;
    int weight = 55;

public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class Human
{
public:
    string color = "Black";

public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid obj;
    obj.speak();
    obj.bark();
    cout << "Age = " << obj.age << endl;
    cout << "Weight = " << obj.weight << endl;
    cout << "Weight = " << obj.color << endl;

    return 0;
}