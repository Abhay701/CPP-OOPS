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
        cout << "Simple Constructor Called!" << endl;
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

    // Manually made Copy Constructor
    Hero(Hero &temp)
    {

        cout << "Copy Constructor called!" << endl;

        char *ch = new char[strlen(temp.name + 1)];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

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

    ~Hero()
    {
        cout << "Destructor bhai called!" << endl;
    }
};

int main()
{
    // Static Allocation
    Hero a; // this automatically calls destructor

    // Dynamic Allocation
    Hero *b = new Hero();
    // Destructor call manually
    delete b;

    return 0;
}