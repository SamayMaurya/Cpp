#include <iostream>
using namespace std;

class emp
{
private:
    string name;
    int empID;
    int sal;
    string comp;

public:
    void setdata(string n, int id, int s, string c)
    {
        name = n;
        empID = id;
        sal = s;
        comp = c;
    }
    void show()
    {
        cout << "Name Of Employee: " << name << endl;
        cout << "ID Of Employee: " << empID << endl;
        cout << "Salary Of Employee: " << sal << endl;
        cout << "Company of the Employee: " << comp << endl;
    }
};

int main()
{
    emp e;
    string n, c;
    int id, sal;
    cout << "Enter Employee Name: ";
    cin >> n;
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Salary: ";
    cin >> sal;
    cout << "Enter Employee Company: ";
    cin >> c;
    cout << endl;
    e.setdata(n, id, sal, c);
    e.show();
}
