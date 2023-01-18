#include<iostream>
using namespace std;
int main(){
    int x=10,y=10,z=0;

    try
    {
    if (y==0)
    {
        throw 222;

    }
        else{
            z=x/y;
        }
    }
    catch(int x)
    {
        cout<<"Denominator is zero which is not possible";
    }
    cout<<z<<endl;
    cout<<"hello world i am samay maurya"<<endl;
    cout<<"your programe will terminate normally "<<endl;
}