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

    void setHealth(int h, string password)
    { // setter

        if (password == "Abh@y!")
        { // Now only who can acces this from outside of class that knows the password
            health = h;
        }
        else
        {
            cout << "Wrong password!" << endl;
        }
    }

    void setLevel(char ch)
    { // setter
        level = ch;
    }
};

int main()
{
    Hero ramesh;

    // ramesh.health = 68;
    ramesh.level = 'A';
    string str;

    cout << "Size of class = " << sizeof(ramesh) << endl;
    // cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    cout << "Enter password to fetch health of Ramesh: ";
    cin >> str;
    ramesh.setHealth(88, str);
    cout << "Ramesh health is: " << ramesh.getHealth() << endl;
}