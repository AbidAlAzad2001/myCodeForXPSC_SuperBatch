#include <bits/stdc++.h>
using namespace std;

void TEST_CASE()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if(n&1){
        cout<<"NO\n";
        return;
    }
    int m = n/2;
    vector<int>ans(n);
    for(int i=0;i<m;i++)
    {
        ans[i*2] = a[i];
        ans[i*2+1] = a[i+m];
    }
    bool flag = true;
    for(int i=1;i<n-1;i++)
    {
        if((ans[i]>ans[i-1] && ans[i]>ans[i+1]) || 
        (ans[i]<ans[i-1] && ans[i]<ans[i+1]))
            continue;
        else
        {
            flag = false;
            break;
        }
    }
    if(!flag)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i: ans)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        TEST_CASE();
    }

    return 0;
}