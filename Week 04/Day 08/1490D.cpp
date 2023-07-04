#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
vector<int>a;

void solve(int i,int j,int d){
    if(i>j)
        return;
    int index;
    int mx = INT_MIN;
    for(int k=i;k<=j;k++)
    {
        if(a[k]>=mx)
        {
            mx = a[k];
            index = k;
        }
    }
    ans[index] = d;
    solve(i,index-1,d+1);
    solve(index+1,j,d+1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        a.resize(n);
        ans.resize(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        solve(0,n-1,0);
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}