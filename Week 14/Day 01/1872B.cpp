#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Abid;
    cin>>Abid;
    while(Abid--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x = (b[i]-1)/2;
            ans=min(ans,x+a[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}