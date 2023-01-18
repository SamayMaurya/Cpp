#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int>l1; //no element
    list <int>l2{22,11,33};
    list <string>l3{"India","Nepal","Srilanka"};
    list<int> ::iterator p=l2.begin();
    while(p!=l2.end())
    {
     cout<<*p<<"  ";
     p++;
    }
}