#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

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
    Hero a; // Static allocation

    a.setLevel('B');
    a.setHealth(80);
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth() << endl;

    Hero *b = new Hero; // Dynamic allocation
    // cout << "Level is: " << (*b).level << endl;
    // cout << "Health is: " << (*b).getHealth() << endl;
    // or
    b->setLevel('A');
    b->setHealth(87);
    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;
}