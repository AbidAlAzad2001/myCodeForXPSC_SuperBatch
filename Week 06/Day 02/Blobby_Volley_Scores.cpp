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
        string s;
        cin>>s;
        int a=0,b=0;
        char ch = 'A';
        for(int i=0;i<n;i++)
        {
            if(s[i]==ch)
            {
                if(s[i]=='A')
                    a++;
                else
                    b++;
            }
            else
                ch = s[i];
        }
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}