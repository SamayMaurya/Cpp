// //prime check 


#include <iostream>
using namespace std;

class prime
{
private:
    int n;

public:
void get_data(){
    cout<<"enter number u wnat to check";
    cin>>n;
    
}
friend void check(prime ob);
};

void check(prime ob)
{
    int m=0, flag=0 , i,n;
    m=n/2;
    for ( i = 2; i <= m; i++){
        if (n%i==0)
        {
            flag = 1;
            break;
        }
        
    }

    if(flag==0)
    {
        printf("\nprime nehi hai luwde");
    }

    if (flag==1)
    {
        printf("\nprime  hai luwde");
    }
    
    

}

int main()
{
    prime kk;
    kk.get_data();
    check(kk);
}







// #include <iostream>
// using namespace std;

// class prime
// {
// private:
//     int n;

// public:
//     void get_data()
//     {
//         cout << "enter number u wnat to check";
//         cin >> n;
//     }
//     friend void check(prime ob);
// };

// void check(prime ob)
// {
//     int m = 0, flag = 0, i, n;
//     m = n / 2;
//     for (i = 2; i <= m; i++)
//     {
//         if (n % i == 0)
//         {

//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         printf("\nprime nehi hai luwde");
//     }

//     if (flag == 1)
//     {
//         printf("\nprime  hai luwde");
//     }
// }

// int main()
// {
//     prime kk;
//     kk.get_data();
//     check(kk);
// }

