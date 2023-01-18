#include <iostream>
#include <exception>
using namespace std;
class thisis : public exception{
    public:
        const char * raj()//what() const throw()
        //what is used if not used the informatupn hhiding is there 
        {
            return "Attempted to divide by zero!\n";
        }
};
int main()
{
    try
    {
        int x, y;
        cout << "Enter the two numbers : \n";
        cin >> x >> y;
        if (y == 0)
        {
            thisis z;
            throw z;
        }
        else
        {
            cout << "x / y = " << x/y << endl;
        }
    }
    catch(thisis e)
    {
        cout << e.raj();
    }
}
