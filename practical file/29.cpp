#include <iostream>
#include <exception>
using namespace std;
class MyException:public exception
{
public:
    const char* what()const throw()
    {
        return "Denominator can't be Zero\n";
    }
};
int main()
{
    int x,y,z=0;
    cout<<"Enter x & y"<<endl;
    cin>>x;
    cin>>y;
    try
    {
        if(y==0)
        {
            MyException a;
            throw a;
        }
        else
        {
            z=x/y;
            cout<<"z="<<z<<endl;
        }
    }
    catch(MyException e)
    {
        cout<<e.what();
    }
}
