// If Parent and child classes are there and pointer of parent is referring to the object of
// child then how virtual destructor of parent plays an important role? Write a program to
// demonstrate the scenario.

#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<< "Constructor Base class\n";
    }
    virtual ~Base()
    {
        cout<< "Destructor Base class\n";
    }
};

class Derived :public Base{
    public:
    Derived()
    {
        cout << "Constructor Derived class\n" ;
    }
    ~Derived()
    {
        cout << "Destructor Derived class\n" ;
    }
};
int main()
{
    Base *ptr = new Derived;
    delete ptr;
}