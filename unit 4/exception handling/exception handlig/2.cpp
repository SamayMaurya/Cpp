//exception handling programme 

#include<iostream>
using namespace std;

int main(){
    int withdraw,limit;
    
    printf("enter The amaount you want to withdraw\n");
    cin>>withdraw;
    limit=150000;
    try
    {
        if(limit>withdraw){
        throw 1;
        }
        else if (limit=withdraw)
        {
            throw 1.2;
        }
    }
    catch(int x)
    {
        printf("wait for your transaction");

    }
    catch(float y){
        printf("Now You have zero balance left");

    }
    catch(...){
        cout<<"Sorry you have insuffiant balance";
    }
    


}