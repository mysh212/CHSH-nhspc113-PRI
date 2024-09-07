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
        for(int r = l; r < n; r++) {
            vector<int> used(n+1);
            for(int i = l; i <= r; i++) used[a[i]]++;
            if(*max_element(used.begin(), used.end()) <= 1) {
                ans = max(ans, r - l + 1);
            }

        }
    }
    cout << ans << endl;

}