#include<iostream>
using namespace std;
class demo
{
private:
    string s1;
public:
    demo(){
    }
    demo(string stri)
    {
        s1=stri;

    }
    void show(){
        cout<<s1;
    }
    demo operator+(demo d){
        demo d3;
        s1.append(d.s1);
        d3.s1=s1;
        return d3;

    }


};

int main()
{
    demo d1("pusha");
    demo d2("i hate tears");
    demo d3=d1+d2;
    d3.show();

}