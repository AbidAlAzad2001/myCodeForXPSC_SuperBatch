#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        int  l =0, j = 0;
        for(int i=n-1;i>=0;i--)
        {
            j++;
            if(a[i]*j>=x)
            {
                l++;
                j=0;
            }
        }
        cout<<l<<endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i, j, k, l, o, p;
//     cin >> k;
//     while (k--)
//     {
//         cin >> o >> p;
//         int a[o];
//         for (i = 0; i < o; i++)
//             cin >> a[i];
//         sort(a, a + o);
//         l = 0;
//         j = 0;
//         for (i = o - 1; i >= 0; i--)
//         {
//             j++;
//             if (a[i] * j >= p)
//             {
//                 l++;
//                 j = 0;
//             }
//         };
//         cout << l << "\n";
//     }
// }