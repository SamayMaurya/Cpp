//wrap to create a genric function and add two numbers


#include<iostream>
using namespace std;

template<class T> T sum(T x, T y){
    return x+y;
}

int main(){
    cout<<sum(15,16)<<endl;
    cout<<sum(55.2f, 16.0f)<<endl;

}