#include <iostream>
#include <exception>
using namespace std;
class myexception: public exception{
    public:
    const char*what()const throw(){
        return "denomib canr be 0";
    }
};

int main(){
    int x,y,z;
    cout<<"enter numbers";
    cin>>x;
    cin>>y;
    try
    {
        if (y==0)
        {
            myexception e;
            throw e;

        }
        else{
            z=x/y;
            cout<<z;

        }
        
    }
    catch(myexception e){
        cout<<e.what();
    }


}