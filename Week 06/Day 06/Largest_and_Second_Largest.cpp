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
        set<int,greater<int>> st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        auto it = st.begin();
        auto it2 = it;
        auto i = it++;
        cout<<(*it+*i)<<endl;
    }

    return 0;
}