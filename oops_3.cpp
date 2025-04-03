#include <iostream>
using namespace std;

class Hero
{
public:
    int health;

private: // We can access private properties only inside the class
    char level;

    void print()
    {
        cout << "level is: " << level << endl;
    }
};

int main()
{
    Hero ramesh; // Created a object of Hero type object
    // cout<<"Size = "<<sizeof(Hero)<<endl;
    ramesh.health = 68;

    /* or */ cout << "Size = " << sizeof(ramesh) << endl;
    cout << "Health is: " << ramesh.health << endl;
    // cout<<"level is: "<<ramesh.level<<endl; // it shows error, because level is private & can't be accessible outside the class
}