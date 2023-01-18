#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream f;
    f.open("sample.txt",ios::app);
    if (!f)
    {
        cout<<"no file found";
    }
    else{
        f<<"this is end of the sem opps file";
    }
    f.close();
    char ch[20];
    f.open("sample.txt");
    while (f>>ch)
    {
        cout<<ch<<" ";
    }
    f.close();
    return 0;
}
