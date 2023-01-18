// Write a program to create objects at the time of run. Also, write code to delete objects
// dynamically.

#include <iostream>
using namespace std;
class test{
    private:
    int x,y;
    public:
    test(int x, int y){
        this->x=x;
        this->y=y;

    }
    void show(){
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl;

    }
    ~test(){
        cout<<"object deleted";

    }

};

int main(){
    test *t=new test(15,20);
    t->show();
    delete t;
}