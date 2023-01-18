#include <iostream>
using namespace std;

class demo
{
private:
    string s;
public:
    demo(){

    }

    demo(string s1 )
    {
        s=s1;

    }
    void show(){
        cout<<s<<endl;
    }
    demo operator+(demo d){
        demo d3;
        s.append(d.s);
        d3.s=s;
        return d3;

    }
};


int main()
{
    demo d1("push");
    demo d2("paa");
    demo d3=d1+d2;
    d3.show();

}


//menu driven programme

// #include <iostream>
// using namespace std;
// class Demo
// {
// private:
//     string s;

// public:
//     Demo()
//     {
//     }
//     Demo(string s1)
//     {
//         s = s1;
//     }
//     void get_data()
//     {
//         cout << "enter string ";
//         cin >> s;
//     }
//     void show()
//     {
//         cout << s << endl;
//     }
//     Demo operator+(Demo d)
//     {
//         Demo d3;
//         s.append(d.s);
//         d3.s = s;
//         return d3;
//     }
// };
// int main()
// {
//     printf("string 1\n");
//     Demo d1;
//     d1.get_data();
//     printf("string 2\n");
//     Demo d2;
//     d2.get_data();
//     printf("result\n");
//     Demo d3 = d1 + d2;
//     d3.show();
// }
