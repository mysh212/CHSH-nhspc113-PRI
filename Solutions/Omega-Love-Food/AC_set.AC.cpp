#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    set<int> st;
    for(int r = 0, l = 0; r < n; r++) {

        while(st.count(a[r])) st.erase(a[l++]);
        st.insert(a[r]);
        ans = max(ans, (int)st.size());
    }
    cout << ans << endl;

}