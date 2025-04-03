#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping!" << endl;
    }
};

int main()
{
    Male object1;
    object1.setWeight(85);
    cout << "Age = " << object1.age << endl;
    cout << "Weight = " << object1.weight << endl;
    cout << "Height = " << object1.height << endl;
    cout << "Color = " << object1.color << endl;
    object1.sleep();

    return 0;
}