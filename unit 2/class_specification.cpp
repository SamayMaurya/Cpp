#include<iostream>
using namespace std;
class demo
{
private:
int a,b;
public:
void input(){
    cout<<"enter the value";
    cin>>a>>b;
}
void show(){
    cout<<a<<" "<<b;
}
};

int main()
{
    demo ob;
    ob.input();
    ob.show();

}
