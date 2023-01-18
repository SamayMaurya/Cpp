#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter row(n) and column(m)"<<endl;
    cin >> n;
    cin >> m;
    int arr[n][m];
    cout<<"Enter Elemets";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n";
    int rs = 0, re = n - 1, cs = 0, ce = m - 1;
    while (rs < re && cs < ce)
    {
        for (int i = cs; i <= ce; ++i)
        {
            cout << arr[rs][i] << " ";
        }
        rs++;
        for (int i = rs; i <= re; ++i)
        {
            cout << arr[i][ce] << " ";
        }
        ce--;
        for (int i = ce; i >= cs; --i)
        {
            cout << arr[re][i] << " ";
        }
        re--;
        for (int i = re; i >= rs; --i)
        {
            cout << arr[i][cs] << " ";
        }
        cs++;
    }
}
