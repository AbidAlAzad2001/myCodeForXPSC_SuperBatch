#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, b, A1 = 0, A = 0, B = 0;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
        {
            cin >> b;
            B |= b;
        }
        for (int i = 0; i < n; i++)
        {
            A ^= a[i];
            A1 ^= (a[i] | B);
        }
        if (n % 2 == 0)
            cout << A1 << " " << A << endl;
        else
            cout << A << " " << A1 << endl;
    }

    return 0;
}