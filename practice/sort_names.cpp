// Create an array of ten names and sort them. (Use string class for string handling)
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "enter number of students";
    cin >> n;
    string s[100];
    cout << "enter name of student";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++)
    {
        cout<< s[i]<<endl;
    }
}