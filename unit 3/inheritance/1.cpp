// Inheriting in public mode
#include<iostream>
using namespace std;
class A
{
    private:
        int x=10;
    public:
        int y=20;
    protected:
        int z=30;
};
class B:public A
{
public:
   /* void setX(int x1)
    {
       x=x1;// Error, since x is private in class A hence not inherited
    } */
    void setY(int y1)
    {
       y=y1; // Since y is public hence available in derived class
    }

    void setZ(int z1)
    {
       z=z1; // Since z is protected hence available in derived class
    }
    void show()
    {
       //cout<<"The value of x= "<<x<<endl; //Error, since x is private in class A hence not inherited
       cout<<"The value of y= "<<y<<endl;
       cout<<"The value of x= "<<z<<endl;

    }
};
int main()
{
    B d;
    //cout<<d.setX(10);  // Error, since x is private in class A hence not inherited
    d.setY(20);
    d.setZ(30);
    d.show();
}
