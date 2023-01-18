#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    float percentage;
    public:
    void accept(){
        cout<<"enter roll number and percentage of the student \n";
        cin>>roll>>percentage;
    }

    void display();


};

void student :: display(){
    cout<<"______student details_____";
    cout<<"roll number"<<roll<<endl;
    cout<<"percentage "<<percentage<<endl;
}

int main(){
    student s[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        s[i].accept();
    }

    for ( i = 0; i < 5; i++)
    {
        s[i].display();
    }
    
    
}




// menu driven programme
// #include <iostream>
// using namespace std;
// class test
// {
// private:
//     int x;
//     string s1;

// public:
//     void get_data()
//     {
//         cout << "enter roll number" << endl;
//         cin >> x;
//         cout << "enter name of student" << endl;
//         cin >> s1;
//     }
//     void show()
//     {
//         cout << "Roll Number =" << x << endl
//              << "name of student is" << s1 << endl;
//     }
// };

// int main()
// {
//     printf("enter number of studemts");
//     int f;
//     cin >> f;
//     test d[f];
//     for (int i = 0; i < f; i++)
//     {
//         d[i].get_data();
//     }

//     for (int i = 0; i < f; i++)
//     {
//         d[i].show();
//     }
// }


