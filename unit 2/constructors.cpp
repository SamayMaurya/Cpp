#include<iostream>
using namespace std;
class constructors_ats
{
private:
int a,b,c;
public:
constructors_ats(){       //this is the counstructor 
    a=0;                //these are initializtion by constructors
    b=10;              //these are initializtion by constructors
    c=25;                  //these are initializtion by constructors

}
void input(){
    cout<<"\n enter three numbers:";
    cin>>a>>b>>c;
}
void output(void);

};

void constructors_ats::output(void){ //defining memebr function outside
    cout<<"\n A:"<<a;
    cout<<"\n B:"<<b;
    cout<<"\n C:"<<c;
}

int main(){
    constructors_ats s1;   //here constructors are called
    s1.input();
    s1.output();
    constructors_ats s2;
    s2.output();

}