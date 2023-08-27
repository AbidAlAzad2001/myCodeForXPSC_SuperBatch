#include"bits/stdc++.h"
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        long long  sum = 0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            x-=i;
            mp[x]++;
        }
        for(auto it: mp)
        {
            long long  a = it.second;
            sum+=(a*(a-1))/2;
        }
        cout<<sum<<endl;
    }

    return 0;
}