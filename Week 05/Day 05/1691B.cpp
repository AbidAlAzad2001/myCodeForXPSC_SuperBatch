#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n),v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=i+1;
        }
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] == a[i+1])
            {
                v.push_back(b[i+1]);
                swap(b[i],b[i+1]);
                mp[i]++;
                mp[i+1]++;
            }
            else
            {
                if(mp[i]!=0)
                    v.push_back(b[i]);
                else
                {
                    bool flag = false;
                    break;
                }
            }
        }
        if(mp[n-1]!=0)
            v.push_back(b[n-1]);
        else
            flag = false;
        if(!flag)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}