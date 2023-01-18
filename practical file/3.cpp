#include <iostream>
using namespace std;
void update(int arr[])
{
    int pos, ele;
    cout << "Enter the position of the element you want to upadate: ";
    cin >> pos;
    cout << "Enter the element to be updated: ";
    cin >> ele;
    arr[pos - 1] = ele;
}
void dele(int arr[])
{
    int i, n, p;
    cout << "Enter the position of the element you want to delete: ";
    cin >> p;
    for (i = p - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
void sorting(int arr[])
{
    int i, j, n, temp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
}
void lsearch(int arr[])
{
    int n, i, key;
    cout << "Enter the no you want to search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            cout << "the no is present\n";
    }
}
int main()
{
    int n, arr[10], pos, ele, i, key, temp, j, p;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    update(arr);
    dele(arr);
    sorting(arr);
    lsearch(arr);
    cout << "The array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}