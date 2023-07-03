#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt = 0;
        int n = s.size();
        vector<bool>v(26,false);
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a'])
            {
                cnt+=2;
                for(int j=0;j<26;j++)
                    v[j] = false;
            }
            else
                v[s[i] - 'a'] = true;
        }
        cout<<n-cnt<<endl;
    }

    return 0;
}