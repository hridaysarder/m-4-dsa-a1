#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i])
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}