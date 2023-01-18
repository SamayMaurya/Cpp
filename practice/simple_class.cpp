// The employees have four attributes: id, name, salary, and company name. Initialize id,
// name, and salary at the time of object creation. The list of methods is given asvoid

// setID(int) - to set the employee’s ID.
// void setName(string) - to set the employee’s name
// void setSalary(int) - to set the employee’s salary.
// void setCompany_name(string)- to set the employee’s company name

// int getId()-to get the employee’s id
// string getName()-to get the employee’s name.
// int getSalary()-to get the employee’s salary.
// string getCompany_name()-to get the employee’s company name.



#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class emp{
    private:
    string name;
    int id;
    int sal;
    string comp;

    public:
    void getdata(string s1,int id1, int s,string company){
        name=s1;
        id=id1;
        sal=s;
        comp=company;
    }
    void putdata(){
        cout<<"name of emp"<<name<<endl;
        cout<<"id of emp"<<id<<endl;
        cout<<"salary of emp"<<sal<<endl;
        cout<<"company of emp"<<comp<<endl;
    }

};

int main(){
    emp e;
    int id,sal;
    string s1,comp;
    cout<<"enter emp name"<<endl;
    cin>>s1;
    cout<<"enter emp id"<<endl;
    cin>>id;
    cout<<"enter emp sakay"<<endl;
    cin>>sal;
    cout<<"enter emp compny"<<endl;
    cin>>comp;
    cout<<endl;
    e.getdata(s1,id,sal,comp);
    e.putdata();



}