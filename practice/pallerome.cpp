// Write a program to check whether the given program is palindrome?

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void pale(string s1){
    string same=s1;
    reverse(same.begin(),same.end());
    if(s1==same){
        printf("pallendrome");
    }
    else{
        printf(" not pallendrome");
    }
}

int main(){
    string s1;
    cout<<"enter sting";
    cin>>s1;
    pale(s1);
}