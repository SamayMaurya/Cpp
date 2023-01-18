#include<iostream>
#include<string.h>
using namespace std;

class stdent{
    int roll;
    string name;
    public:

    void getdata(int x , string y){
        roll=x;
        name = y;
    }
    void putdata(){
        cout<<"\nstudent name"<<name;
        cout<<"\nstudent roll number"<<roll;
    }


};


int main()
{
    stdent obj;
    stdent *p;
    p= &obj;
    p->getdata(1, "ravi");
    p->putdata();
}