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
        string s;
        cin>>s;
        vector<int>red,blue;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'B')
                blue.push_back(a[i]);
            else
                red.push_back(a[i]);
        }
        sort(blue.begin(),blue.end());
        sort(red.begin(),red.end(),greater<int>());
        bool ok = true;
        for(int i=0;i<blue.size();i++)
        {
            
        }
    }

    return 0;
}