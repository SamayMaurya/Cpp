
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main()
{

    ifstream fin;
    fin.open("sample.txt");
    char ch[20], c[20];
    int count=0;
    cout << "enter a word to count:"<<endl;
    cin>>c;
    while (fin)
    {
        fin>>ch;
        if (strcmp(ch,c))
        {
            count++;
        }
    }
    cout<<"answer"<<count-1;
    fin.close();
    return 0;
}