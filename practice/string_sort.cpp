// Enter any string and sort it. (Use string class for string handling)

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
void sortstring(string str){
    cout<<"enter string";
    cin>>str;
    sort(str.begin(),str.end());
    cout<<str;
}

int main(){
    string str;
    sortstring(str);
    return 0;
}