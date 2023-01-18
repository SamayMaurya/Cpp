#include <iostream>
using namespace std;
class Zero
{
public:
    int x, y, z;
    void Exception(int x, int y)
    {
        while (1)
        {
            cout << "Enter x & y" << endl;
            cin >> x;
            cin >> y;
            try
            {
                if (y == 0)
                {
                    throw 1;
                }
                else
                {
                    z = x / y;
                    cout << z << endl; break;
                }
            }
            catch (int)
            {
                cout << "Zero Division Error" << endl; continue;
            }
        }
    }
};
int main()
{
    Zero c;
    int x, y;
    c.Exception(x, y);
    return 0;
}
