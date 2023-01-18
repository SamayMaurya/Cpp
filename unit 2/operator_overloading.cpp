// #include<iostream>
// using namespace std;
// class complex{
//     private:
//     int real, image;
//     public:
//     complex(){
//         real = 0;
//         image = 0;

//     }
//     complex(int r  , int i){
//         real=r;
//         image= i;
//     }

//     void print(){
//         cout<<real<<"+"<<image<<"i"<<endl;
//     }

//     //operator overloading 
//     complex operator +(complex c){
//         complex temp;
//         temp.real=real+c.real;
//         temp.image=image+c.image;
//         return temp;
//     }
// };

// int main(){
//     complex c1(5,4);
//     complex c2(2,5);
//     complex c3;

//     c3=c1+c2;
//     c3.print();
// }


//unary operator 
// #include<iostream>
// using namespace std;

// class count{
//     private:
//     int value;
//     public:

//     count() : value(8){}



//     // count():value(5){
//     // }
//     void operator ++(){
//         ++value;
//     }

//     void dispaly(){
//         cout<<"count:"<<value<<endl;

//     }


// };


// int main(){
//     count count1;
//     ++count1;

//     count1.dispaly();
//     return 0;
// }


//overloading of ++ operator using member function
// #include<iostream>
// using namespace std;
// class demo{
//     private:
//     int x,y,z;
//     public:
//     demo(int a,int b,int c){  //constructor 
//         x=a;
//         y=b;
//         z=c;  
//     }

//     void show(){
//         cout<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z<<endl;

//     }
//     void operator ++(){  //operator overloading
//         x++;
//         y++;
//         z++;
//     }

// };

// int main(){
//     demo d(10,15,20);
//     d.show();
//     ++d;      //d.operators++();    
//     d.show();
// }


//using friend function

// #include<iostream>
// using namespace std;
// class xyz{
//     private:
//     int x,y,z;
//     public:
//     xyz(int a, int b,int c){
//         x=a;
//         y=b;
//         z=c;
//     }

//     void show(){   cout<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z<<endl;

//     }

//     friend void operator ++(xyz &);//for prefix
//     friend void operator ++(xyz &, int no_use);//for postfix

// };

// void operator ++(xyz &d){
//     d.x++;
//     d.y++;
//     d.z++;
            
// }

// void operator ++(xyz &d, int no_use){
//     d.x++;
//     d.y++;
//     d.z++;
// }

// int main(){
//     xyz d1(10,20,30);
//     d1.show();
//     printf("\n prefix");
//     ++d1;
//     d1.show();
//     printf("\n postfix");
//     d1++;
//     d1.show();


// }