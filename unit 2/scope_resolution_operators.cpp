#include<iostream>
using namespace std;
int i =10; //global variable
int main(){
    int i =20;
    cout<<"local variable i:"<<i<<"\n";
    cout<<"global varaiable i:"<<::i<<"\n";
    // here we use scope resolution operator

    return 0;
}