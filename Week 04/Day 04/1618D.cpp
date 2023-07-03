#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);    
        for(int i=0;i<n;i++)
            cout<<a[i];
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int ans = 0;
        while (l<r)
        {
            /* code */
            if(k){
            int v = a[l]/a[r];
            ans += v;
            k--;
            }
            else
            {
                ans+=a[l]+a[k];
            }
            l++;
            r--;
        }
        cout<<ans<<endl;
        
    }

    return 0;
}