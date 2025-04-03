#include <iostream>
using namespace std;

class B
{
public:
    int a, b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Here '+' operator is used as subtraction:" << endl;
        cout << "Output = " << value2 - value1 << endl;
    }

    void operator*(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Here '*' operator is used as addition:" << endl;
        cout << "Output = " << value2 + value1 << endl;
    }

    // Bracket operator overloaded
    void operator()()
    {
        cout << "Mai bracket hu " << this->a << endl;
    }
};

int main()
{
    B obj1, obj2;
    obj1.a = 1;
    obj2.a = 7;
    obj1 + obj1;
    obj1 + obj2;
    obj1 *obj2;

    obj1(); // Bracket operator overloaded

    return 0;
}