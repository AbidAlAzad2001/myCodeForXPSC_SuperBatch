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
        int x = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == x)
                x++;
            x++;
        }
        cout<<x-1<<endl;
    }

    return 0;
}