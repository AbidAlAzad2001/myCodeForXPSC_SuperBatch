#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        int sum1 = 0, sum2 = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long ans = min(sum1+b[0]*n*1ll,sum2+a[0]*n*1ll);
        cout<<ans<<endl;
    }

    return 0;
}