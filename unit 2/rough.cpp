
// #include <iostream>
// using namespace std;
// class B; // forward declaration of class B
// class A
// {
// private:
//     int x;

// public:
//     void setX(int x1)
//     {
//         x = x1;
//     }
//     int getX()
//     {
//         return x;
//     }
//     friend void sum(A, B); // see third line of this program, the forward declaration of class B is required
// };

// class B
// {
// private:
//     int y;

// public:
//     void setY(int y1)
//     {
//         y = y1;
//     }
//     int getY()
//     {
//         return y;
//     }
//     friend void sum(A, B);
// };

// void sum(A a, B b)
// {
//     cout << "The sum of x and y is: " << a.x + b.y;
// }
// int main()
// {
//     A s1;
//     s1.setX(50);
//     B s2;
//     s2.setY(70);
//     sum(s1, s2); // call friend function directly
// }

// #include <iostream>
// using namespace std;
// class A
// {
// private:
//     int x;

// public:
//     void setX(int x1)
//     {
//         x = x1;
//     }
//     friend class B; // class B is friend to A, means its member functions can access the data members of class A, but vice-versa is not possible
// };

// class B
// {
// public:
//     void show(A a)
//     {
//         cout << "The value of x in class A is: " << a.x;
//     }
// };

// int main()
// {
//     A s1;
//     s1.setX(50);
//     B s2;
//     s2.show(s1);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str1 = "Hello how r u?";
//     cout << "String contains :" << str1 << '\n';
//     cout << "Position of the first occurrence of the string 'Hi' is " << str1.find_first_of("hi"); // 6  occurance of any character from "hi" at first
//     cout << "Position of the first occurrence of the string 'Hi' is " << str1.find_first_of("Hi"); // 0

//     return 0;
// }


