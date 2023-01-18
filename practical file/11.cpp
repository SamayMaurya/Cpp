#include <iostream>
using namespace std;
class test
{
private:
    int x, y;

public:
    test(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "x: " << x << "\n"<< "y: " << y << endl;
    }
    ~test()
    {
        cout << "The object is deleted";
    }
};
int main()
{
    test *t = new test(15, 20);
    t->show();
    delete t;
}
