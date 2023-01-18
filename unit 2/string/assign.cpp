#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello how are u?";
    string s2 = "hello u?";
    string s3 = "";
    s3.assign(s2);
    cout<<s3<<endl;
}