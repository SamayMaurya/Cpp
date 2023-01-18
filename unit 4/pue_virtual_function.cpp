// Pure virtual functions and abstract classes.

#include<iostream>
using namespace std;

class A{
    public:
    virtual void show()=0;

    void display(){
        cout<<"byee byee\n";

    }

};

class B:public A{
    public:
    void show(){
        cout<<"hello\n";

    }
};

int main(){
    B b;
    b.show();
    b.display();
    
}