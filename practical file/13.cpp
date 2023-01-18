#include<iostream>
using namespace std;
class XYZ
{
private:
    int x;
public:
    XYZ(int a){x=a;}
    int operator + (XYZ &p)
    {
        return(x + (p.x));
    }
};

int main()
{
    XYZ py(10);
    XYZ px(51);
    cout<<"sum is "<<py+px<<endl;
}

