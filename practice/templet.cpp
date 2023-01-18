// Write a function sum(argument 1, argument 2) that can take any type of two arguments
// and add them. Write a program also to demonstrate.

//for 1 type argument

// #include <iostream>
// using namespace std;

// class demo
// {
// public:
//     template <class T> T sum(T x, T y)
//     {
//         return x + y;
//     }
// };

// int main()
// {
//     demo ob;
//     cout << ob.sum(10, 10) << endl;
//     cout << ob.sum(10.3, 11.6) << endl;
// }

//2 argument

#include <iostream>
using namespace std;

class demo
{
public:
    template <class T, class T1> T sum(T x, T1 y)
    {
        return x + y;
    }
};

int main()
{
    demo ob;
    cout << ob.sum(10, 10) << endl;
    cout << ob.sum(10.3, 11) << endl;
}