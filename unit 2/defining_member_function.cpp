#include<iostream>
using namespace std;
class test
{
private:
int roll;
float per;
public:
void get_data(int,float);
void put_data(void){
    cout<<"roll="<< roll;   //inside the class function
    cout<<"\nper="<< per;
}
};
void test:: get_data(int x , float y){             //outside the class function
    roll = x;                   
    per = y;

}

int main(){
    test s1;               
    s1.get_data(101,80.3);
    s1.put_data();
}

