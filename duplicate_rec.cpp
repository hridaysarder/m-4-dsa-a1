#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end() - 1);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
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