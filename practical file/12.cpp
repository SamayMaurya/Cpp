#include <iostream>
using namespace std;
class demo
{
private:
    int x, y, z;

public:
    demo(int a, int b, int c) // constructor
    {
        x = a;
        y = b;
        z = c;
    }
    void show()
    {
        cout << "x= " << x << "\t"
             << "y= " << y << "\t"
             << "z= " << z << endl;
    }
    void operator++()
    {
        x++;
        y++;
        z++;
    }
};
int main()
{
    demo d(10, 15, 20);
    d.show();
    ++d; //  d.operator++();
    d.show();
}
