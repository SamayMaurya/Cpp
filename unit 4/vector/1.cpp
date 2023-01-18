#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v{1,2,3};
vector<int> v1{1};
vector<int> v2{5};


cout<<v.capacity()<<endl;
cout<<v1.capacity() <<endl;
cout<< v2.capacity() <<endl;

v2.push_back(10);

v.push_back(10000);
cout<< v2.capacity() <<endl;
cout<< v2.size() <<endl;

v2.pop_back();

cout<< v2.capacity() <<endl;
cout<< v2.size() <<endl;

for (int i = 0; i < 10; i++)
{
    v2.push_back(10*(i+1));

}
for (int i = 0; i < v2.size(); i++)
{
    cout<<endl<<v2[i];

}
for (int i = 0; i < 5; i++)
{
    v2.push_back(10*(i+1));

}
for (int i = 0; i < v2.size(); i++)
{
    cout<<endl<<v2[i];

}

cout<< v2.at(3) <<endl;
cout<< v2.front() <<endl;
cout<< v2.back() <<endl;

vector<int>::iterator it=v1.begin();
v1.insert(it+0,20);
for (int i = 0; i < v1.size()-1; i++)
{
    cout<<v1[i]<<endl;
}




return 0;

}


