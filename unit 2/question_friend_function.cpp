// //C++ Program to convert a decimal number into binary with friend function

// #include<iostream>
// using namespace std;
// class converstion{
//     public:
//     int n;
//     int i=1,bin=0,j=n;
//     public:
//     void expl(){
//         cout<<"enter the decimal number";
//         cin>>n;
//         for ( j = n; j > 0; j=j/2)
//         {
//             bin=bin*(n%2)*i;
//             i=i*10;
//             n=n/2;
//         }
//     }
//     friend int show(converstion ob);

// };

// int show(converstion ob){
//     cout<<"binary number is ="<<ob.bin;
//     return 0;
// }

// int main()
// {
//     converstion kk;
//     show(kk);
// }



//Write C++ Program to display the cube of the number upto a given integer using friend function. 

// #include<iostream>
// using namespace std;
// class cube{
//     public: 
//     int i,n;
//     void function()
//     {
//         cout<<"entr number you want ot print cube";
//         cin>>n;
//         for ( i = 1; i <=n; i++)
//         {
//             cout<<"the cube of "<<i<<"is ="<<(i*i*i)<<endl;
//         }
        
//     }
//     friend int show(cube);
// };

// int show(cube ob){
//     cout<<"cube of "<<ob.i<<"is"<<(ob.i*ob.i*ob.i)<<endl;
//     return 0;
// }

// int main()
// {
//     cube a;
//     a.function();
//     show(a);


// }