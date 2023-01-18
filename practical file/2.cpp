#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[] = {"Samay", "Dikshant", "Aakash", "Vikrant", "Dhruv", "Kartik", "Anmol", "Ayran", "Manmohan"};
    sort(s, s + 9);
    for (int i = 0; i < 9; ++i)
    {
        cout << s[i] << "\n";
    }
}
