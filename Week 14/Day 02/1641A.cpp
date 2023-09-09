#include"bits/stdc++.h"
using namespace std;

void TEST_CASE()
{
    int n,x;
    cin>>n>>x;
    vector<long long >a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            long long  m = a[i]*x;
            int low = i+1,high = n-1;
            int found = -1;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                if(a[mid]==m)
                {
                    found = mid;
                    high = mid - 1;
                }
                if(a[mid]<m)
                low = mid+1;
                else    
                    high = mid - 1;
            }
            if(found ==-1)
                ans++;
            else
                a[found] = -1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        TEST_CASE();

    }

    return 0;
}