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
class B:protected A{
    protected:
        /* void setX(int x1)
         {
            x=x1;// Error, since x is private in class A hence not inherited
         } */
        void setY(int y1)
        {
            y = y1; // Since y is public hence available in derived class
        }

        void setZ(int z1)
        {
            z = z1; // Since z is protected hence available in derived class
        }
        void show()
        {
            // cout<<"The value of x= "<<x<<endl; //Error, since x is private in class A hence not inherited
            cout << "The value of y= " << y << endl;
            cout << "The value of x= " << z << endl;
        }
};

int main()
{
        B d;
        // cout<<d.setX(10);  // Error, since x is private in class A hence not inherited
        
        // x will not be accessible since it is private in class A
        // y will beome protected now
        // z is protected and it will remain protected
}