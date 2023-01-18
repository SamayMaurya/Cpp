//

//wrap to create a genric function and add four numbers


#include<iostream>
using namespace std;

template<class T, class R,class X,class G> T sum(T x, R y,X z,G a){
    return (x+y-z)*a;
}

int main(){
    cout<<sum(15,16,56.4f,5)<<endl;
    cout<<sum(55.2d, 16.0f,2,2)<<endl;
    cout<<sum(6,5.8f,56,3)<<endl;
    cout<<sum(6.5f,5,45.2d,4)<<endl;

}