// Write a program to read text from keyboard then write to some text file like
// “Sample.txt”. Then read this content and write back to console.


#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("sample.txt");
    string line;
    cin>>line;
    while (fout)
    {
        cin>>line;
        if(line == "-1"){
            break;
        }
        fout<<line<<endl;
    }
    fout.close();

    ifstream fin;
    fin.open("sample.txt");
    while (fin>>line)
    {
        cout<<line<<endl;
    }
    fin.close();
}
