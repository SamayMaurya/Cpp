#include<iostream>
using namespace std;

class demo

{
private:
int x,y,z;
public:
    // demo(int a,int b,int c){
    //     x=a;
    //     y=b;
    //     z=c;

    // }
    void put_data(){
        cout<<"enter x";
        cin>>x;
        cout << "enter y";
        cin >> y;
        cout << "enter z";
        cin >> z;
    }

    void show(){
        cout << "x=" << x <<"\t" << "y=" << y <<"\t" << "z=" << z <<"\t";
    }
    friend void operator++(demo &);
    friend void operator++(demo &, int no_use);
};

void operator++(demo &d)
{
    d.x++;
    d.y++;
    d.z++;
}

void operator++(demo &d, int no_use){
    d.x++;
    d.y++;
    d.z++;
}

int main(){
    demo d1;
    d1.put_data();
    d1.show();

    ++d1;
    printf("\n");
    d1.show();
    cout<<endl;
    d1++;
    d1.show();

}