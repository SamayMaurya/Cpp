#include<iostream>
using namespace std;

class demo
{
private:
    int x,y,z;
public:
    demo(){

    }
    demo(int x, int y, int z){
        this->x=x;
        this->y = y;
        this->z = z;
    }

    void show(){
        cout << "sum of Xs:" << x << endl;
        cout << "sum of Ys:" << y << endl;
        cout << "sum of Zs:" << z << endl;
    }
    friend demo operator +(demo d1, demo d2);
};

demo operator+(demo d1, demo d2){
    demo d3;
    d3.x=d1.x+d2.x;
    d3.y = d1.y + d2.y;
    d3.z = d1.z + d2.z;
    return d3;  
}


int main()
{
    demo d1(1,2,3);
    demo d2(4,5,6);
    demo d3=d1+d2;
    d3.show();
}