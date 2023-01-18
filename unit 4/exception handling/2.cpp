//

//wrap to create a genric function and add two numbers


#include<iostream>
using namespace std;

template<class T, class R> T sum(T x, R y){
    return x+y;
}

int main(){
    cout<<sum(15,16)<<endl;
    cout<<sum(55.2f, 16.0f)<<endl;
    cout<<sum(6,5.8f)<<endl;
    cout<<sum(6.5f,5)<<endl;

}