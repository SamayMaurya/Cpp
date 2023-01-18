// // Unresolved Code:-
// #include <iostream>
// using namespace std;
// class A 
// {
// public:
//     void say()
//     {
//         cout << "Hello world"<<endl;
//     }
// };

// class B : public A {};
// class C : public A { };
// class D : public B, public C { };

// int main()
//  {
//  D a1;
//  a1.say();
//  }

// Resolved Code:-
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
class C : public virtual A {};
class D : public B, public C {};
int main()
{
    D a1;
    a1.say();
}



