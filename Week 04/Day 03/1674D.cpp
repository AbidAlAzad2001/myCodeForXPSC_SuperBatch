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
        if(n%2 == 0)
        {
            for(int i=0;i<n;i+=2)
            {
                if(a[i]>a[i+1])
                    swap(a[i],a[i+1]);
            }
        }
        else
        {
            for(int i=1;i<n;i+=2)
            {
                if(a[i]>a[i+1])
                    swap(a[i],a[i+1]);
            }
        }
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        if(a == b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}