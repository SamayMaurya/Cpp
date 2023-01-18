
#include <iostream>
using namespace std;
static int count = 0;
class A
{
    private:
    int x;

public:
    A()
    {
        count++;
        x = 10;
    }
};
int main()
{
    A o, o1, o2, o4, o5, o8;
    cout <<"Number of objects created : "<< count << endl;
}
