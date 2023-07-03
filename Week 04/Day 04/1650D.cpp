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
        vector<int>temp;
        vector<int>v(n+1,0),ans(n+1,0);
        for(int i=1;i<=n;i++)
            cin>>v[i];
        for(int i=n;i>=1;i--)
        {
            if(v[i] == i)
                continue;
            int d = 0,idx=0;
            for(int j=1;j<=i;j++)
            {
                if(v[j] == i)
                {
                    d = j;
                    idx = j;
                    break;
                }
            }
            ans[i] = d;
            for(int j=idx+1;j<=i;j++)
                temp.push_back(v[j]);
            for(int j=1;j<=idx;j++)
                temp.push_back(v[j]);
            // for(int j=i+1;j<=n;j++)
            //     temp.push_back(v[j]);
            for(int j=1;j<=n;j++)
                v[j] = temp[j-1];
        }
        // bool flag = true;
        // for(int i=1;i<=n;i++)
        // {
        //     if(temp[i]!=i)
        //         flag = false;
        // }
        // if(flag)
        // {
        //     for(int i=1;i<=n;i++)
        //         cout<<ans[i]<<" ";
        // }
        // else
        //     cout<<-1<<endl;
        // for(int i=1;i<=n;i++)
        //     cout<<v[i]<<" ";
        // cout<<endl;
    }

    return 0;
}