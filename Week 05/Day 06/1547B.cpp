#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        int k=-1;
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]=='a')
            {
                k=i;
                break;
            }
        }
        if(k==-1)
        {
            cout<<"NO"<<endl;
        }
        else{
            int i=k-1;
            int j=k+1;
            char ch='b';
            while(i>=0 || j<s.size())
            {
                if(s[i]==ch)
                {
                    ch++;
                    i--;
                }
                else if(s[j]==ch)
                {
                    ch++;
                    j++;
                }
                else{
                    ans=1;
                    break;
                }
            }
            if(ans==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}