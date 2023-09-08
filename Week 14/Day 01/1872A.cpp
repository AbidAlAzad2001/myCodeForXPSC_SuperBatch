#include<bits/stdc++.h>
using namespace std;

void TEST_CASE()
{
    int a,b,c;
        cin>>a>>b>>c;
        int mn = min(a,b);
        int diff = abs(b-a);
        if(diff%2 == 0)
        {
            int half = diff/2;
            if(half%c == 0)
            {
                cout<<half/c<<endl;
                return;
            }
            else{
                cout<<(half/c)+1<<endl;
                return;
            }
        }
        else{
            int half = diff/2;
            
            {
                cout<<(half/c)+1<<endl;
                return;
            }
        }
}

int main()
{
    int Abid;
    cin>>Abid;
    while(Abid--)
    {
        TEST_CASE();
    }

    return 0;
}