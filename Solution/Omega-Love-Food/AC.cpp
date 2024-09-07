#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    vector<int> used(n+1);
    for(int r = 0, l = 0; r < n; r++) {
        used[a[r]]++;
        while(used[a[r]] > 1) used[a[l++]]--;
        ans = max(ans, r-l+1);
    }
    cout << ans << endl;

}