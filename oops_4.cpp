#include <iostream>
using namespace std;

class Hero
{
    public:
    int health;
    char level;

    void print(){
        cout<<"level is: "<<level<<endl;
    }

};

int main()
{
    Hero ramesh;
    ramesh.health=68;
    ramesh.level='A';

    cout<<"Size of class = "<<sizeof(ramesh)<<endl; 
    cout<<"Health is: "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;


}