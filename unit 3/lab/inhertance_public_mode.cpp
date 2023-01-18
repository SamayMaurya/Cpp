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

class B:public A{
public:
    // void setX(int x1)
    // {
    //     x = x1; // Error, since x is private in class A hence not inherited
    // }
    void setY(int y1){
    
        y=y1; //SINCE Y is public hence avalable in derived class
    }
    void setZ(int z1){
        z=z1;

    }
    void show(){
        cout<<"the value of y="<<y<<endl;
        cout << "the value of x=" << z << endl;
    }

};

int main(){
    B d;
    d.setY(20);
    d.setZ(30);
    d.show();
    return 0;



}


