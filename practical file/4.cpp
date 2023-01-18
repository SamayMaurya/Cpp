#include <bits/stdc++.h>
using namespace std;
string palindrome(string s1)
{
    string c_palindrome = s1;
    reverse(c_palindrome.begin(), c_palindrome.end());
    if (s1 == c_palindrome)
    {
        return "Palindrome";
    }
    else
    {
        return "Not Palindrome";
    }
}

int main()
{
    string d1;
    cout << "Enter String: ";
    cin >> d1;
    cout << palindrome(d1);
}
