#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void sortstring(string str)
{
    sort(str.begin(), str.end());
    cout << str;
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    sortstring(str);
    return 0;
}