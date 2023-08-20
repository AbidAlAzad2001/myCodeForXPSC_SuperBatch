#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a;
    a.push_back(1);
    map<int,int>mp;
    mp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        if(mp[i]==1)
        continue;
        int x = i;
        while(x<=n)
        {
            if(mp[x]!=1)
            {
                a.push_back(x);
                mp[x] = 1;
                x*=2;
            }
        }
    }
    for(auto it:a)
    cout<<it<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}