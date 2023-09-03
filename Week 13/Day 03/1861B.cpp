#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n = a.size();
        int flag = false;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1')
            flag = true;
        }
        if(flag)
            cout<<"Yes\n";
        else    
            cout<<"No\n";
    }

    return 0;
}