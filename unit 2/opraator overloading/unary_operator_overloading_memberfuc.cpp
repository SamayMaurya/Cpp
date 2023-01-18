// Unary operator overloading
// two ways-(i) by using member function, in this no argument will be passed
//(ii) by using friend function, in this case one argument will be passed

//Using member function 

#include<iostream>
using namespace std;
class demo{
    private:
    int x,y,z,l,m,n;
    public:
    //paramatrized constructor
    demo(int a,int b,int c){
        x=a;
        y=b;
        z=c;

    }


    void show(){
        cout << "x=" <<x<< "\t"<< "y=" <<y<< "\t"<< "z=" <<z<< "\t";
    
    }

    void operator ++(){
        x++;
        y++;
        z++; 
    }


};
class demo2
{
private:
int l,m,n;
public:
    demo2(int a,int b,int c){
        l=a;
        m=b;
        n=c;
    }

    void show2(){
        cout << "l=" << l << "\t"
             << "m=" << m << "\t"
             << "n=" << n << "\t";
    }

    void operator --(){
        l--;
        --m;
        n--;
    }
    
};


int main(){
    demo d(10,15,20);
    d.show();
    printf("\n");
    ++d;
    d.show();
    printf("\n");
    demo2 d2(5,6,7);
    d2.show2();
    printf("\n");
    --d2;
    d2.show2();
    
}