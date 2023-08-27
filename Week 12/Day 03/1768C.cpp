#include "bits/stdc++.h"
using namespace std;
void TEST_CASE()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> all;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        all.push_back({a[i], i});
    }
    vector<int> b(n), c(n);
    sort(all.begin(), all.end());
    set<int> st1;
    set<int> st2;
    for (int i = 1; i <= n; i++)
    {
        st1.insert(i);
        st2.insert(i);
    }
    for (auto it : all)
    {
        int now = it.first;
        int idx = it.second;
        if (st1.find(now) != st1.end())
        {
            b[idx] = now;
            c[idx] = *st2.begin();
            if (c[idx] > b[idx])
            {
                cout << "NO\n";
                return;
            }
            st1.erase(b[idx]);
            st2.erase(c[idx]);
        }
        else if (st2.find(now) != st2.end())
        {
            b[idx] = *st1.begin();
            c[idx] = now;
            if (b[idx] > c[idx])
            {
                cout << "NO\n";
                return;
            }
            st1.erase(b[idx]);
            st2.erase(c[idx]);
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for (auto i : b)
        cout << i << " ";
    cout << endl;
    for (auto i : c)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        TEST_CASE();
    }

    return 0;
}