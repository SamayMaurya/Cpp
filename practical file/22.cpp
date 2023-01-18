
#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<< "Constructor Base class\n";
    }
    ~Base()
    {
        cout<< "Destructor Base class\n";
    }
};
class Derived: public Base
{
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
