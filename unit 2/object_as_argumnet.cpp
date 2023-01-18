#include<iostream>
using namespace std;
class time{
    private:
    int hr,min;
    public:
    void gettime(int,int);
    void puttime(void);
    void sum(time,time);



};

void time:: gettime(int x,int y){
    hr=x;
    min=y;
}
void time:: puttime(void){
    cout<<"\nhours="<<hr;
    cout<<"\nminutes ="<<min;

}

void time:: sum(time t1,time t2){
    min=t1.min+t2.min; //80
    hr= min/60;         //80/60= 1
    min=min%60;      //80%60=20
    hr=hr+t1.hr+t2.hr;   //
}

int main()
{
    time t1,t2,t3;
    t1.gettime(0,60);
    t2.gettime(0,30);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();
    return 0;

}