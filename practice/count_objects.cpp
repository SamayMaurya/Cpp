// Write a program that counts the total number of objects created for any given class.
#include <iostream>
using namespace std;
    int count = 0;
class a{


    public:

    a(){
        count++;
        // x=10;
    }


};
int main()
{
    a o, o1, o2, o23;
    cout <<"Number of objects created : "<< count << endl;
}