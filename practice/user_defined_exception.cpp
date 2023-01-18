    #include <iostream>
    #include <exception>
    using namespace std;

    class myexception : public exception
    {
        public:
        const char* what()const throw()
        {
            return "loww balance";
        }
    };

    class bank
    {

    public:
    int balance = 1000;
        void withdraw(int amount)
        {
            try
            {
                if (amount > balance)
                {
                    myexception low;
                    throw low;
                }
                else
                {
                    balance == amount;
                }
            }
            catch(myexception low)
            {
                cout<<low.what();
            }
    }
    };

    int main()
    {
        bank bank1;
        bank1.withdraw(1500);

    }