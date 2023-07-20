#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int n = x%10;
        if(n>=5)
            x = x + (10-x%10);
        else
            x = x - x%10;
        cout<<100-x<<endl;
    }

    return 0;
}