#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    for(int l = 0; l < n; l++) {
        set<int> s;
        for(int r = l; r < n; r++) {
            if(s.count(a[r]) == 0) {
                ans = max(ans, r-l+1);
            } else {
                break;
            }
            s.insert(a[r]);
        }
    }
    cout << ans << endl;
 
}