//pallendrome check

// #include <iostream>
// using namespace std;

// class pallendrome
// {
// private:
//     int n;

// public:
//     void get_data()
//     {
//         cout << "enter number u wnat to check";
//         cin >> n;
//     }
//     friend void check(pallendrome ob);
// };

// void check(pallendrome ob)
// {
//  int rev=0,dig,n,f=0;

// do
// {
//             dig=n%10;
//             rev=(rev*10)+dig;
//             n=n/10;
//             f=1;
            
// } while (n!=0);

//  if (f=1)
//  {
//     printf("pallendrome");
//  }

//  if(f=0){
//     printf("not pallendrome");
//  }
 
 
// }

// int main()
// {
//     pallendrome kk;
//     kk.get_data();
//     check(kk);
// }

#include <iostream>
#include <cstring>
using namespace std;
void check();
class pallendrome
{
private:
    char arr[100];

public:
    pallendrome()
    {
        cout << "enter the string u wnat to check = ";
        cin >> arr;
    }
    friend void check(pallendrome);
};

void check(pallendrome ob)
{
    bool f = true;
    int j = strlen(ob.arr) - 1;
    for (int i = 0; i < j; i++, j--)
    {
        if (ob.arr[i] != ob.arr[j])
        {
            f = false;
        }
    }

    if (f)
    {
        cout << "pallendrome";
    }

    else
    {
        cout << "not pallendrome";
    }
}

int main()
{
    pallendrome kk;
    check(kk);
}