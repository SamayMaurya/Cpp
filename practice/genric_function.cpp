#include <iostream>
using namespace std;
class demo
{
public:
    template <class T> T sum(T x, T y, T z)
    {
        return x + y + z;
    }
    template <class T> T sum(T x)
    {
        return x * x;
    }
};
int main()
{
    demo ob;
    cout << ob.sum(10) << endl;
    cout << ob.sum(10.2, 11.3, 12.4) << endl; return 0;
}
