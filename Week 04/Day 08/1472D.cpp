#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long ans = 0;
        sort(a.rbegin(),a.rend());
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]%2==0)
                {
                    ans+=a[i];
                    // cout<<"even :"<<i<<" :"<<ans<<endl;
                }
            }
            else
            {
                if(a[i]%2==1)
                {
                    ans-=a[i];
                    // cout<<"odd :"<<i<<" :"<<ans<<endl;
                }
            }
            // cout<<ans<<endl;
        }
        if(ans == 0)
            cout<<"Tie\n";
        else if(ans>0)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }

    return 0;
}