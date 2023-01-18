#include<iostream>
using namespace std;

class lowbalance: exception{
    public:
    const char *what() const throw(){
        return "You have low balance";
    }
};

class employee{
    private:
    int id,account;
    public:
    employee(){};
    
    employee(int id,int account){
        this->id=id;
        this->account= account;


    }
    void show(){
        cout<<"ID= "<<id<<endl;
        cout<<"Account= "<<account<<endl;
        
    }
    void deposite(int cash){
        this->account+=cash;

    }
    void withdraw(int cash){
        
        try
        {
            
            if(cash >this->account){
            lowbalance low;
            throw low;
            }

        
        else{
            this->account-=cash;
            cout<<"cash withdraw="<<cash<<endl;
        }
        }
        catch(lowbalance low){
            cout<<low.what()<<endl;

        }
        

    }
};

int main()
{
    employee e1(101, 9999);
    e1.deposite(1);
    e1.show();
    e1.withdraw(100);

    return 0;

}