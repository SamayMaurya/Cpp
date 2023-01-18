#include <iostream>
using namespace std;
class A
{
private:
    int x = 10;

public:
    int y = 20;

protected:
    int z = 30;
};
class B : private A
{
    // x will not be accessible since it is private in class A
    // y will beome private now
    // z is become private now
};
int main()
{
    B d;
}