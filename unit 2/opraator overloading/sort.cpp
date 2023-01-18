#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s[]={"ravi","mohan","kamlesh"};
    int n = sizeof(s) / sizeof(s[0]); // n=3/4== 0

    sort(s,s+n);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    

}