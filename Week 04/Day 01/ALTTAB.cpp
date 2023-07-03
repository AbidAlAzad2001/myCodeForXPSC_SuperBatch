#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    vector<string>v(N);

    for(int i=0; i<N; i++)
        cin>>v[i];

    unordered_map<string,int>mp;

    string ans = "";

    for(int i=v.size()-1; i>=0; i--)
    {
        string s = v[i];

        if(mp.find(s) != mp.end())
            continue;

        else
        {
            ans += s[s.size()-2];
            ans += s[s.size()-1];
            mp[s]++;
        }
    }
    cout<<ans<<"\n";
}