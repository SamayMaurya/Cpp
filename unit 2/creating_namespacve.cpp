#include <iostream>
using namespace std;
namespace samay 
{
    int a, b = 50;
    void ab()
    {
        cout << "your is answer hello c++" << endl;
    }

};
namespace sam
{
    int a, b = 55;
    void ab()
    {
        cout << "your answer" << endl;
        ;
    }
};

int main()
{

    sam::ab();

    samay::ab();
    cout << "answer" << sam::b << endl;
    cout << "answer" << samay::b << endl;
}