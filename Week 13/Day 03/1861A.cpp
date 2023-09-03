#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Abid;
    cin >> Abid;
    while (Abid--)
    {
        string s;
        cin>>s;
        int pos = 0,pos1 = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
                pos = i;
            else if(s[i] == '3')
                pos1 = i;
        }
        if(pos<pos1)
            cout<<13<<endl;
        else if(pos>pos1) 
            cout<<31<<endl;
        else
            cout<<-1<<endl;
        
    }

    return 0;
}