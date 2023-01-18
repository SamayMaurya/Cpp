#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello how are u?";
    string s2 = "hello u?";
    cout<<s1<<endl;
    cout << s2 << endl<<endl;

    s1.swap(s2);
    cout<<s1<<endl;
    cout << s2 << endl;
}