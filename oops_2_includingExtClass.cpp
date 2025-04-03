#include <iostream>
#include "Hero.cpp" // include external class
using namespace std;

int main()
{
    Hero h1; // Created a object of Hero type object
    cout << "Size = " << sizeof(Hero) << endl;
    /* or */ cout << "Size = " << sizeof(h1) << endl;
}