#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n*.9<m)
            cout<<"ONLINE\n";
        else if(n*.9>m)
            cout<<"DINING\n";
        else
            cout<<"EITHER\n";
    }

    return 0;
}