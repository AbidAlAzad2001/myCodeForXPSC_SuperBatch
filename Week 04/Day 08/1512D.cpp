// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n + 2);
//         long long sum = 0;
//         int mx = INT_MIN;
//         for (int i = 0; i < n + 2; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//             mx = max(mx,a[i]);
//         }
//         sort(a.begin(),a.end());
//         sum -= mx;
//         int ind = -1;
//         int cnt = 0;
//         bool flag = true;
//         for (int i = 0; i < n + 1; i++)
//         {
//             if (sum - a[i] == mx)
//             {
//                 ind = i;
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//             cout << -1 << endl;
//         else
//         {
//             for (int i = 0; i < n + 1; i++)
//             {
//                 if (ind == i)
//                     continue;
//                 else
//                     cout << a[i] << " ";
//             }
//             cout<<endl;
//         }
//     }

//     return 0;
// }

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
    int flag = 0;
    int b[n + 2];
    long long int sum = 0;
    for (int i = 0; i < n + 2; i++)
    {
      cin >> b[i];
      sum += b[i];
    }
    int f = -1;
    sort(b, b + n + 2);
    long long int m = b[n + 1];
    sum = sum - b[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
      if (sum - b[i] == m)
      {
        f = i;
        break;
      }
    }
    if (f != -1)
    {
      flag = 1;
      for (int i = 0; i < n + 1; i++)
      {
        if (i == f)
          continue;
        else
        {
          cout << b[i] << " ";
        }
      }
      cout << endl;
      continue;
    }
    else
    {
      sum = sum - b[n];
      long long int s = 0;
      for (int i = 0; i < n; i++)
      {
        s = s + b[i];
      }
      if (s == b[n])
      {
        flag = 1;
        for (int i = 0; i < n; i++)
          cout << b[i] << " ";
        cout << endl;
      }
    }
    if (flag == 0)
      cout << -1 << endl;
  }
}