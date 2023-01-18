// Write a program having a number of sum () methods which are used to sum the provided
// arguments. Also write a show() method to show the result.

#include <iostream>
using namespace std;
class Addition
{
public:
    int result;
    void sum(int a)
    {
        result = a;
    }
    void sum(int a,int b)
    {
        result = a+b;
    }
    void sum(int a,int b,int c)
    {
        result = a+b+c;
    }
    void show(){
        cout<<result<<endl;
    }
};

int main(){
    Addition a1;
    a1.sum(1);
    a1.sum(1,2);
    a1.sum(1,2,3);
    a1.show();
}