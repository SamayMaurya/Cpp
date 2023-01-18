#include <bits/stdc++.h>
using namespace std;
class emp
{
private:
    string name;
    int emp_ID;
    int sal;

public:
    emp(){
        
    }                     // Default Constructor
    emp(string n, int id, int s) // Parameterized Constructor
    {
        name = n;
        emp_ID = id;
        sal = s;
    }
    emp(emp &ee) // Copy Constructor
    {
        name = ee.name;
        emp_ID = ee.emp_ID;
        sal = ee.sal;
    }
    void show()
    {
        cout << "Name of the Employee: " << name << endl;
        cout << "ID of Employee: " << emp_ID << endl;
        cout << "Salary of Employee: " << sal << endl;
        cout << endl;
    }
};
int main()
{
    emp e1;
    string n;
    int id, s;
    cout << "Enter Name: ";
    cin >> n;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Salary: ";
    cin >> s;
    cout << endl;
    emp e(n, id, s);
    e.show();
    cout << endl;
    emp e2(n, id, s);
    e2.show();
}
