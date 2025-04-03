#include <iostream>
using namespace std;

class A
{
    // function overloading
public:
    void sayHello()
    {
        cout << "Hello Abhay!" << endl;
    }

public:
    int sayHello(int n)
    {
        cout << "Hello Sonu!" << endl;
        return n;
    }

public:
    void sayHello(string name)
    {
        cout << "Hello " << name << "!" << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello(10);
    obj.sayHello("Lion");
}