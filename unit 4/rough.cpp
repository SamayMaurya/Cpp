#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing base\n";
    }
    ~base()
    {
        cout << "Destructing base\n";
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Constructing derived\n";
    }
    ~derived()
    {
        cout << "Destructing derived\n";
    }
};

int main()
{
    base *b = new derived();
    delete b; // Early binding hence type of b will be considered
}