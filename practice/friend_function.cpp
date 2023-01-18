// If you want to access private members of a class, then what are the options? Use
// examples to demonstrate.
// Friend function is used to access the private member of the class.

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

void sum(A a){
    int c=a.x+a.y;
    cout << "The sum is: "<<c;
}

void difference(A b)
{
    int d=b.x-b.y;
    cout << "The Difference is: " <<d;
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
