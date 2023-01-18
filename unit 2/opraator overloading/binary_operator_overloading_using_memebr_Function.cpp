// Binary operator overloading.
// here we are overloading + operator such that it can be able to add the instance fields of two objects.like obj3 = obj1 + obj2.
// (i)by using member function(in this case only one argument will be passed)
// (ii) by using friend function(in this case two arguments will be passed)

#include <iostream>
using namespace std;
class demo
{
private:
    int x, y, z;

public:
    demo()
    {
    }

    demo(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void show()
    {
        cout << "sum of Xs:" << x << endl;
        cout << "sum of Ys:" << y << endl;
        cout << "sum of Zs:" << z << endl;
    }

    demo operator+(demo d)
    {
        demo d3;
        d3.x = x + d.x;
        d3.y = y + d.y;
        d3.z = z + d.z;
        return d3;
    }
};

int main()
{
    demo d1(1, 2, 3);
    demo d2(10, 20, 30);
    demo d3 = d1 + d2;
    d3.show();
}




//menu driven programe

// #include <iostream>
// using namespace std;
// class demo
// {
// private:
//     int x, y, z;

// public:
//     demo()
//     {
//     }

//     demo(int a, int b, int c)
//     {
//         x = a;
//         y = b;
//         z = c;
//     }
//     void get_data()
//     {
//         cout << "enter x" << endl;
//         cin >> x;
//         cout << "enter y" << endl;
//         cin >> y;
//         cout << "enter z" << endl;
//         cin >> z;
//     }

//     void show()
//     {
//         cout << "sum of Xs:" << x << endl;
//         cout << "sum of Ys:" << y << endl;
//         cout << "sum of Zs:" << z << endl;
//     }

//     demo operator+(demo d)
//     {
//         demo d3;
//         d3.x = x + d.x;
//         d3.y = y + d.y;
//         d3.z = z + d.z;
//         return d3;
//     }
// };

// int main()
// {
//     demo d1;
//     demo d2;
//     printf("enter data 1\n");
//     d1.get_data();
//     printf("enter data 2\n");
//     d2.get_data();

//     demo d3 = d1 + d2;
//     d3.show();
// }