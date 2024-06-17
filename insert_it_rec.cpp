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
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int j = 0; j < m; j++)
    {
        cin >> v2[j];
    }
    int x;
    cin >> x;
    v.insert(v.begin() + x, v2.begin(), v2.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}