#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;

private:
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
    Male m1;
    m1.setWeight(85);
    // cout << "Age = " << object1.age << endl; // Private members Can't acccesible by Inheritance
    cout << "Weight = " << m1.weight << endl;
    cout << "Height = " << m1.height << endl;
    cout << "Color = " << m1.color << endl;
    m1.sleep();

    return 0;
}