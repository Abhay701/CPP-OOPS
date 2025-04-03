#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // Hero() // Default constructor which creats automatically on creating object
    // {
    //     cout << "Constructor Called!" << endl;
    // }

    // Parameterised Contructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        cout << "this -> " << this << endl;
        this->health = health;
        this->level = level;
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
    // Object created statically
    Hero ramesh(10);
    cout << "Address of ramesh: " << &ramesh << endl;
    ramesh.print();

    // Object created dynamically
    Hero *h = new Hero(12);
    cout << "Address of h: " << &h << endl;
    h->print();
 
    Hero temp(22, 'B');
    cout << "Address of temp: " << &temp << endl;
    temp.print();

    // Hero tt; // this will never be done, when a parameterised contructor is made, then it will not make default constructor, unless we made it manually
}