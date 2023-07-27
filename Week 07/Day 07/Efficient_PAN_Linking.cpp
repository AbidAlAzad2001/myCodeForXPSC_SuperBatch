#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    if (s.size() == 1)
        cout <<s <<"\n"; 
    else{
        unsigned int n = stoi(s.substr(s.size()-2));
        cout << n%20 <<"\n";
    } 

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
    unsigned int TC;
    cin >> TC;
    while(TC--){
        solve();
    }
    return 0;
}