#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(i == 1 || i == n || 
            ((a[i-1]<a[i])!=(a[i]<a[i+1])))
                ans.push_back(a[i]);
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}