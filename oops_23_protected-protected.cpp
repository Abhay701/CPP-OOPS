#include <iostream>
using namespace std;

class Human
{
protected:
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

class Male : protected Human
{
public:
    string color = "White";

    void sleep()
    {
        cout << "Male sleeping!" << endl;
    }

    int getHeight()
    {
        int h = 4;
        this->height = h;
        return this->height;
    }
};

int main()
{
    Male m1;
    // m1.setWeight(85); // protected members are only accessible in the main class and in derived/child class, we can't access these outside
    // cout << "Age = " << m1.age << endl; // Private members Can't acccesible by Inheritance
    // cout << "Weight = " << m1.weight << endl; // protected members are only accessible in the main class and in derived/child class, we can't access these outside
    // cout << "Height = " << m1.height << endl; // protected members are only accessible in the main class and in derived/child class, we can't access these outside
    cout << "Color = " << m1.color << endl;
    m1.sleep();

    cout << "Height = " << m1.getHeight() << endl;

    return 0;
}