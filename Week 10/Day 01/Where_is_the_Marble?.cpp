#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    int cs = 1;
    while (cin >> n >> q)
    {

        if (n == 0 && q == 0)
            break;
        cout << "CASE# " << cs << ":" << endl;
        cs++;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        while (q--)
        {
            int x;
            cin >> x;
            int ans = -1;
            int l = 0, r = n - 1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (a[mid] == x)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else if (x > a[mid])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            if (ans == -1)
                cout << x << " not found" << endl;
            else
                cout << x << " found at " << ans + 1 << endl;
        }
    }
    return 0;
}