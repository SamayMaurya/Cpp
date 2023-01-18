#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    void getval(int x,int y){
        a=x;
        b=y; 
    }
    friend test sum(test,test);
    void display(test);
};
test sum(test t1,test t2){
    test t;
    t.a=t1.a+t2.a;
    t.b=t1.b+t2.b;

    return t;

}

void test :: display(test t){
    cout<<"\nvallue of a is"<<t.a;
    cout<<"\nvalue of b is "<<t.b;
}

int main(){
    test a,b,c;
    a.getval(10,20);
    b.getval(30,40);
    c= sum(a,b);
    a.display(a);
    b.display(b);
    c.display(c);
        
}
