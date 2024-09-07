#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int ans = INT_MAX;
	auto test = [&](auto self, int pos, int step, int mx) {
		if(step == k && pos == n-1) {
			ans = min(ans, mx);
			return;
		}
		for(int i = pos+1; i < n; i++) if(s[i] == '0') {
			self(self, i, step+1, max(mx, i-pos));
		}
	};
	test(test, 0, 1, 0);
	if(ans == INT_MAX) cout << "-1\n";
	else cout << ans << endl;

}
