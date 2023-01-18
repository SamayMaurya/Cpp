#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(const Point& X1)
    {
        x = X1.x;
        y = X1.y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    Point X1(20,85);
    Point X2 = X1;
    cout << "X1.x = " << X1.getX()<< ", X1.y = " << X1.getY();
    cout << "\nX2.x = " << X2.getX()<< ", X2.y = " << X2.getY();
    return 0;
}
