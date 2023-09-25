#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        int x = v[0].first;
        int y = v[0].second;
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= x)
            {
                if (v[i].second >= y)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << -1 << endl;
        else
            cout << x << endl;
    }

    return 0;
}