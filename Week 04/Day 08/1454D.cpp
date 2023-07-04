#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<pair<int,long long>>v;
        for(int i=2;i<=sqrt(n);i++)
        {
            int cnt = 0;
            while(n%i == 0)
            {
                cnt++;
                n/=i;
            }
            if(cnt>0)
            {
                v.push_back({cnt,i});
            }
        }
        if(n>1)
            v.push_back({1,n});
        sort(v.rbegin(),v.rend());
        vector<long long>ans(v[0].first, v[0].second);
        for(int i=1;i<v.size();i++)
        {
            for(int j=0;j<v[i].first;j++)
            {
                ans.back() *= v[i].second;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        // cout<<"v Size: "<<v.size()<<endl;
    }

    return 0;
}