#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero() // Default constructor which creats automatically on creating object
    {
        cout << "Constructor Called!" << endl;
    }

    void print()
    {
        cout << "level is: " << level << endl;
    }

    int getHealth()
    { // getter
        return health;
    }

    char getLevel()
    { // getter
        return level;
    }

    void setHealth(int h)
    { // setter
        health = h;
    }

    void setLevel(char ch)
    { // setter
        level = ch;
    }
};

int main()
{
    cout << "Hi" << endl;

    // Object created statically
    Hero ramesh;
    cout << "Hello!" << endl;

    // Object created dynamically
    Hero *h = new Hero;
}