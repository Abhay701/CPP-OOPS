#include <iostream>
#include <string.h>
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

    // Parameterised Contructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Manually made Copy Constructor
    Hero(Hero &temp)
    {
        cout << "Copy Constructor called!" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void printH()
    {
        cout << "Health is: " << health << endl;
    }
    void printL()
    {
        cout << "level is: " << level << endl;
    }


};

int main()
{
    // Object created statically
    Hero suresh(70, 'C');
    suresh.printH();
    suresh.printL();

    // Copy Constructor
    Hero R(suresh); // R.health = suresh.health; & R.level = suresh.level;
    R.printH();
    R.printL();
}