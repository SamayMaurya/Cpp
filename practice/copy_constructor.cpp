// Write a program to construct objects of a class with provided initial values. Also,
// demonstrate the copy constructor.

#include <bits/stdc++.h>
using namespace std;
class demo
{
private:
    int id, sal;
    string name;

public:
    // defaut constructor
    demo()
    {
    }
    // paramatrrized constructor
    demo(string n, int id1, int sal)
    {
        name = n;
        id = id1;
        this->sal = sal;
    }
    // copy constructor
    demo(demo &ee)
    {
        name = ee.name;
        id = ee.id;
        sal = ee.sal;
    }

    void show()
    {
        cout << "name of emp" << name << endl;
        cout << "id of emp" << id << endl;
        cout << "salay of emp" << sal << endl;
    }
};

int main()
{
    
    string name;
    int id, sal;
    cout << "enter name" << endl;
    cin >> name;
    cout << "enter id" << endl;
    cin >> id;
    cout << "enter salary" << endl;
    cin >> sal;
    demo e(name, id, sal);
    e.show();
    cout << endl;
    demo e2(name, id, sal);
    e2.show();
}