#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+5;
bool have[mx];
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    int ans = 0;
    while(i<j)
    {
        if(a[i]+a[j]>x)
            j--;
        else
        {
            ans++;
            have[i] = have[j] = true;
            i++;j--;
        }

    }
    for(int i=0;i<n;i++)
    {
        if(!have[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}