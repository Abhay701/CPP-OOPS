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

    void printH()
    {
        cout << "Health is: " << health << endl;
    }
    void printL()
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
    // Object created statically
    Hero suresh(70, 'C');
    suresh.printH();
    suresh.printL();

    // Copy Constructor
    Hero R(suresh); // R.health = suresh.health; & R.level = suresh.level;
    // or
    // Hero R=suresh;
    R.printH();
    R.printL();
}