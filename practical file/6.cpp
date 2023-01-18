#include <iostream>
using namespace std;
void closezero(int *arr, int n)
{
    int a, b, count = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int sum = arr[i] + arr[j];
            if (sum >= 0 && sum < count)
            {
                count = sum;
                a = i;
                b = j;
            }
        }
    }
    cout << arr[a] << " " << arr[b] << endl;
}

int main()
{
    int arr[] = {1, 60, 85, -80, -10, 70};
    closezero(arr, 6);
}
