#include <iostream>
#include <vector>
using namespace std;
void printList(vector <int>&V)
{
    for(int i=0; i<V.size(); i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <int> V ;
    for(int i=0; i<5; i++)
    {
        V.push_back(i+1);
    }
    printList(V);
    cout<<"Adding New Element 7"<<endl;
    V.push_back(7);
    cout<<"Capacity of Vector is "<<V.capacity()<<endl;
    cout<<"Removing last element"<<endl;
    V.pop_back();
    cout<<"Size of Vector is "<<V.size()<<endl;
    cout<<"Adding element at start"<<endl;
    V.insert(V.begin(),0);
    printList(V);
    cout<<"Adding element at 3rd positiont"<<endl;
    V.insert(V.begin()+3,9);
    printList(V);
    V.clear();
    cout<<"After Clearing"<<endl;
    cout<<"Capacity: ";
    cout<<V.capacity()<<endl;
    cout<<"Size: ";
    cout<<V.size()<<endl;
}
