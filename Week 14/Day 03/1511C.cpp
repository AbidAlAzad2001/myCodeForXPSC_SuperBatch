#include"bits/stdc++.h"
using namespace std;
const int sz = 53;
int a[sz];
int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(!a[x]) a[x] = i;
    }

    while(q--)
    {
        int x;
        cin>>x;
        int z = a[x]; a[x] = 0;
        for(int i=1;i<sz;i++)
            if(a[i]<z)
                a[i]++;
        cout<<z<<" ";
    }
    

    return 0;
}