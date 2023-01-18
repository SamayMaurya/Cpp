// Overload the binary operator + to add the integer attribute values of two objects.

#include<iostream>
using namespace std;

class add{
    private:
    int x,y;
    public:
    add(){

    }
    add(int x,int y){
        this->x=x;
        this->y=y;
    }
    void getdata(){
        cout<<"enter x:";
        cin>>x;
        cout<<"enter y:";
        cin>>y;
    }
    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
    add operator+(add d){
        add d3;
        d3.x= x+d.x;
        d3.y= y+d.y;
        return d3;

    }

};
int main(){

    add d1;
    add d2;
    d1.getdata();
    d2.getdata();
    add d3=d1+d2;
    d3.show();



}