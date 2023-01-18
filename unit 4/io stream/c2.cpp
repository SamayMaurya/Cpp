#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char filename[50] ,ch;
    fstream fp;
    cout<<"enetr the name of the file:";
    gets(filename);
    fp.open(filename , fstream::in);
    if(!fp){
        cout<<"error";
        return 0;

    }
    cout<<"\n contnet of "<<filename<<":-\n";
    while (fp>>noskipws>>ch)
    cout<<ch;
    fp.close();
    cout<<endl;
    return 0;

}