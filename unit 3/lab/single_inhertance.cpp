#include <iostream>
using namespace std;
class student
{
public:
    int roll_no = 10;
    void show()
    {
        printf("output from show method\n");
        cout << "the roll number is=" << roll_no;
        cout << endl
             << endl;
    }
};




class mystudent : public student
{
    public:

    string name = "raj";
    void display()
    {
        cout << "output from display method\n ";
        cout << "the roll no is =" << roll_no;
        cout << "endl";
        cout<<"The name is ="<<"name";

        cout<<endl;
    }

};


int main(){
    mystudent s;
    s.show();
    s.display();

}

