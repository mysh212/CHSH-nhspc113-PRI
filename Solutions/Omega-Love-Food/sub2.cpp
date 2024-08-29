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
        vector<int> used(n+1);
        for(int r = l; r < n; r++) {
            used[a[r]]++;
            if(used[a[r]] <= 1) {
                ans = max(ans, r-l+1);
            } else {
                break;
            }
        }
    }
    cout << ans << endl;

}