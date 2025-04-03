#include <iostream>
using namespace std;

class Hero
{ // Created a Hero type class
    // properties
    // char name[100];
    // char level;
    int health;
};

int main()
{
    Hero h1; // Created a object of Hero type object
    cout << "Size = " << sizeof(Hero) << endl;
    /* or */ cout << "Size = " << sizeof(h1) << endl;
}