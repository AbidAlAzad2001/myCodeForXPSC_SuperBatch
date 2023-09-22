#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx INT_MAX
int main()
{
    int abid;
    cin>>abid;
    while(abid--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll l = 1, r = mx;
        ll ans = mx;
        while(l<=r)
        {
            ll mid = (r-l)/2 +l;
            ll res = 0;
            for(ll &i: a)
            {
                if(mid>i)
                {
                    res+=(mid-i);
                }
            }
            if(res<=x)
            {
                ans=mid;
                l = mid+1;
            }
            else 
                r = mid - 1;

        }
        cout<<ans<<endl;
    }

    return 0;
}