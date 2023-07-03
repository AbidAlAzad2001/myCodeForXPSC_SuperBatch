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
        long long sum = 1, num = pow(2,n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum *= a[i];
        }
        for(int i=1;i<=n;i++)
    }

    return 0;
}