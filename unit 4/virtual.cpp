// #include<iostream>
// using namespace std;
// class base{
//     public:
//     base(){
//         cout << "constructing base\n";
//     }
//     ~base(){
//         cout<<"destructing derived \n";
//     }
// };

// class derived: public base{
//     public:
//         derived(){
//             cout << "constructing derived\n";
//             } 
//             ~derived()
//         {
//             cout << "constructing derived\n";
//         }
// };

// int main(){
//         base *b = new derived();
//     delete b;
// }



// A program with virtual destructor
// CPP program without virtual destructor
// causing undefined behavior


//programe 

#include<iostream>
using namespace std;
 class base{
    public:
    base(){
        cout<<"constructing base\n";
    }
        virtual ~base(){
            cout<<"destructor base";

        }
    };

class derived:public base{
    public:
    derived(){
        cout<<"constructing derived \n";
    }
    ~derived(){
        cout<<"destructing derived\n";
    }
};

int main(){
    base *b=new derived();
    delete b;
}

