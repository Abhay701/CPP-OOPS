#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    Hero() // Default constructor which creats automatically on creating object
    {
        cout << "Constructor Called!" << endl;
        name = new char[100];
    }

    // // Parameterised Contructor
    // Hero(int health)
    // {
    //     cout << "this -> " << this << endl;
    //     this->health = health;
    // }

    // Hero(int health, char level)
    // {
    //     this->health = health;
    //     this->level = level;
    // }

    // // Manually made Copy Constructor
    // Hero(Hero &temp)
    // {
    //     cout << "Copy Constructor called!" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print()
    {
        cout << "[ Name is: " << name << ", ";
        cout << "Health is: " << health << ", ";
        cout << "level is: " << level << " ]" << endl;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');

    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // Use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
}