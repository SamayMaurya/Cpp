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

constructors_ats(int x,int y, int z){   //paramaterized constructors
    a=x;
    b=y;
    c=z;
}


// copy constructors
constructors_ats(constructors_ats &t){
    a=t.a;
    b=t.b;
    c=t.c;
}


void output(){ //defining memebr function outside
    cout<<"\n A:"<<a;
    cout<<"\n B:"<<b;
    cout<<"\n C:"<<c;
}

// destructors 
~constructors_ats(){   //destructors work in reverse order 
    cout<<"\nbye"<<b;
}

};



int main(){
    constructors_ats s1;   //here constructors are called
    s1.output();

    //paramatreisez constructors
    constructors_ats s3(10,20,69);
    s3.output();

    //copy constructors

    constructors_ats t(s3);
    t.output();
}