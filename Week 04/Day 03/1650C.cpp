#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second == b.second)
    {
        if(a.first>b.first)
            return a.second>b.second;
        else
            return a.second<b.second;
    }
    return a.second>b.second;
}

int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        int n,m;
        cin>>n>>m;
        unordered_map<int,int>mp,mp1;
        for(int i=1;i<=m;i++)
        {
            int x,w;
            cin>>x>>w;
            mp.insert({i,w});
            mp1.insert({i,x});
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        vector<pair<int,int>>v1(mp1.begin(),mp1.end());
        sort(v.begin(),v.end(),cmp);
        sort(v1.begin(),v1.end(),cmp);
        unordered_map<int,int>sorted_Map,sorted_Map1;
        vector<int>b,a;
        for(auto it: v)
        {
            sorted_Map.insert(it);
        }
        for(auto it: v1)
        {
            sorted_Map1.insert(it);
        }
        for(auto it: sorted_Map)
        {
            a.push_back(it.first);
        }
        for(auto it: sorted_Map1)
        {
            b.push_back(it.first);
        }
        long long sum = 0;
        int i=0;
        for(auto it = sorted_Map.begin();it!=sorted_Map.end() && i<2*n;it++)
        {
            sum+=it->second;
            i++;
        }
        cout<<sum<<endl;
        int l=0,r=2*n;
        while(l<r)
        {
            cout<<b[l]<<" "<<b[r]<<endl;
            l++;
            r--;
        }
    }

    return 0;
}