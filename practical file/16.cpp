#include<iostream>
using namespace std;
class base
{
public:
    int x;
    int y;
    int add;
    base(int a, int b)
    {
        x=a;
        y=b;
    }
    void sum(void)
    {
        add = x+y;
    }
};

class child: public base
{
public:
    child(int a, int b):base(a,b){}
    void show()
    {
        cout<<"SUM IS= "<<add;
    }
};

int main()
{
    child c1(200,51);
    c1.sum();
    c1.show();
}
