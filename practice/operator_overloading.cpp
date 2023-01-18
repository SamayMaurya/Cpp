// Write a program to overload the ++ operator for the following scenario.

// Class A
// Attributes are as follows: int a=1, b=2, c=3.
// Overload the ++ operator (for both prefix and postfix) so that when you apply it to an
// object of class A, it increases the values of all attributes by one. For this example, the
// answer will be

// a=2, b=3 and c=4

#include <iostream>
using namespace std;
class demo
{
private:
    int x, y, z;

public:
    demo(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void show()
    {
        cout << "x= " << x << "\t"<< "y= " << y << "\t"<< "z= " << z << endl;

    }
    void operator++(){
        x++;
        y++;
        z++;
    }
};
int main(){
    demo d1(10,20,30);
    d1.show();
    d1.operator++();
    d1.show();


}
