
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

