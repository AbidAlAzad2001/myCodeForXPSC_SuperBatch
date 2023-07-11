#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        // cout<<is_sorted(a.begin(),a.end())<<endl;
        if(is_sorted(a.begin(),a.end())){
            cout<<0<<endl;
            continue;
        }
        if(a[n-2]>a[n-1] or a[n-2]-a[n-1]>a[n-2] or a[n-2]-a[n-1]>a[n-1]){
            cout<<-1<<endl;
            continue;
        }
        cout<<n-2<<endl;
        for(int i=1;i<=n-2;i++)
            cout<<i<<" "<<n-1<<" "<<n<<endl;
    }

    return 0;
}