// Write a program to demonstrate diamond’s problem. Also update the same program to
// resolve it.

#include <iostream>
using namespace std;
class A 
{
public:
    void say()
    {
        cout << "Hello world"<<endl;
    }
};

class B : public virtual A {};
class C : public virtual A { };
class D : public B, public C { };

int main()
 {
 D a1;
 a1.say();
 }