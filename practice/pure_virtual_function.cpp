#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    virtual void display() = 0;
};
class Derived: public Base
{
public:
    int value2;
    Derived(int a): Base()
    {
        value2 =a;
    }
    void display()
    {
        cout<<"The value of value2: "<<value2<<endl;
    }
};
int main()
{
    Derived obj(2);
    Base *base_obj[1];
    base_obj[0] = &obj;
    base_obj[0]->display();
}