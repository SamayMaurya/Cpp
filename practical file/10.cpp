#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
private:
    int x, y;
public:
    void setdata(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    friend void sum(A);
    friend void difference(A);
};

void sum(A a)
{
    cout << "The sum is: " << a.x + a.y;
}

void difference(A b)
{
    cout << "The Difference is: " << b.x - b.y;
}

int main()
{
    A c;
    int p, q;
    cout << "Enter First Value: ";
    cin >> p;
    cout << "Enter Second Value: ";
    cin >> q;
    cout << endl;
    c.setdata(p, q);
    sum(c);
    cout << endl;
    difference(c);
}
