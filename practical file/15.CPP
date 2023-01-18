#include<iostream>
using namespace std;
class base
{
private:
    string name;
protected:
    int age;
public:
    int roll_number;
    void set()
    {
        cout<<"Enter Details: "<<endl;
        cin>>name;
        cin>>age;
        cin>>roll_number;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll No : "<<roll_number<<endl;
    }
};

class child1 : private base{};
class child2 : protected base{};
class child3 : public base{};

int main()
{
    child3 c3;
    c3.set();
    c3.display();
}
