#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>a(3);
        int sum=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=2)
            cout<<"Not now\n";
        else
            cout<<"Water filling time\n";
    }

    return 0;
}