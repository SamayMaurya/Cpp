#include<iostream>
using namespace std;
class Base
{
public:
    int Base_value =1;
    virtual void show()
    {
        cout<<"Base Value : "<<Base_value<<endl;
    }
};
class Derived: public Base
{
    int Derived_value =20;
    void show()
    {
        cout<<"Derived value "<<Derived_value<<endl;
    }
};
int main()
{
    Base *Base_pointer;
    Derived obj_Derived;
    Base_pointer=&obj_Derived;
    Base_pointer->show();
}