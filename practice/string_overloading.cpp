// Overload the binary operator + to add two strings.   

#include <iostream>
using namespace std;

class demo{
    private:
    string s;
    public:
    demo(){

    }
    demo(string s){
        this->s=s;
    }
    void getdata(){
        cout<<"enter data"<<endl;
        cin>>s;
    }
    void show(){
        cout<<s<<endl;
    }
    demo operator-(demo d){
        demo d2;
        s.append(d.s);
        d2.s=s;
        return d2;
    }
};

int main(){
    demo s1;
    demo s2;

    s1.getdata();
    s2.getdata();
    demo d;
    d=s1-s2;
    d.show();


}