#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)    
            cin>>a[i];
        int ans=1,i=0;
        for(i=n-1;i>=1;i--){
            if(a[i]>=a[i+1]) ans++;
            else break;
        }
        for( ;i>=1;i--)
        {
            if(a[i]<=a[i+1]) ans++;
            else
                break;
        }
        cout<<n-ans<<endl;
    }

    return 0;
}