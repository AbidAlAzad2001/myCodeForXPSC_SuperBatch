#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n1,n2;
        n1 = (s[0]-'0')*10+(s[1]-'0');
        n2 = (s[3]-'0')*10+(s[4]-'0');
        if(n1>12 && n2<12)
            cout<<"DD/MM/YYYY\n";
        else if(n1<12 && n2>12)
            cout<<"MM/DD/YYYY\n";
        else if(n1<=12 && n2<=12)
            cout<<"BOTH\n";
    }

    return 0;
}