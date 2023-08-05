#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        string s;
        cin >> s;
        
        vector<vector<int>> l(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            l[i][0] = s[i];
            l[i][1] = p[i];
            l[i][2] = i;
        }
        
        sort(l.begin(), l.end());
        
        vector<int> q(n, -1);
        for (int i = 0; i < n; i++) {
            q[l[i][2]] = i + 1;
        }
        
        for (int i = 0; i < n; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
