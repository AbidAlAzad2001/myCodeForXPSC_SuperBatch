#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        string s;
        cin>>s;
        int n = (int)s.size(), c = 0, mini = INT_MAX, maxi;
        for(char i = 'a'; i <= 'z' ; i++) {
            c = 0, maxi = 0;
            for(int j = 0 ; j < n ; j++) {
                if(s[j]!=i) {
                    c++;
                    if(c > maxi)
                        maxi = c;
                }
                else { 
                    c = 0;
                }
            }
            
            if(maxi < mini) {
                mini = maxi;
            }
            
        }
        
        if(mini == 0)
            cout<<0<<endl;
        else {
            c = 0;
            while(mini!= 1) {
                mini/=2;
                c++;
            }
            cout<<c+mini<<endl;
        }
    }
    return 0;
}
