#include <bits/stdc++.h>
using  namespace std;

int main() {
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        
        cin >> n;
        
        
        vector<int> ans(1, 0);
        for (int j = 0; j < n; j++) {
            int x;
            
            cin >> x;
            
            if (x != 0 && ans.back() - x >= 0) {
                
                cout << -1 << 
                endl;
                break;
            } else {
                ans.push_back(ans.back() + x);
            }
        }
        
        if (ans.size() == n + 1) {
            for (int j = 1; j < ans.size(); j++) {
                
                cout << ans[j] << " ";
            }
            
            cout << 
            endl;
        }
    }
    
    return 0;
}
