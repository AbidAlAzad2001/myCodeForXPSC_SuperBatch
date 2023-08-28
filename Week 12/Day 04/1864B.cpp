#include"bits/stdc++.h"
using namespace std;

void TEST_CASE()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k%2 ==0)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    string even = "";
    string odd = "";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            even+=s[i];
        else    
            odd+=s[i];
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    for(int i=n-1;i>=0;i--)
    {
        if(i%2 == 0)
        {
            s[i] = even.back();
            even.pop_back();
        }
        else{
            s[i]=odd.back();
            odd.pop_back();
        }
    }
    cout<<s<<endl;
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