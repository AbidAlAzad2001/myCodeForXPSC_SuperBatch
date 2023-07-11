#include<bits/stdc++.h>
using namespace std;

void line(int m,int start)
{
    int t = start;
    for(int i=1;i<=m;i+=2)
    {
        if(t == 1){
            printf("1 0 ");
        }
        else
            printf("0 1 ");
        t^=1;
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int p =1;
        for(int i=1;i<=n;i+=2)
        {
            if(p)
            {
                line(m,1);
                line(m,0);
            }
            else
            {
                line(m,0);
                line(m,1);
            }
            p^=1;
        }
    }

    return 0;
}