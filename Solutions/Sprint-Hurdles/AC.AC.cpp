#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
    int zero = 0;
    for(int i = 0; i < n; i++) {
        zero += (s[i] == '0');
    }
    if(zero < k) {
        cout << "-1\n";
        return 0;
    }

	auto ok = [&](int x) -> bool {
		int cnt = 1;
		int pre = 0, furthest_pos = -1;
		for(int i = 1; i < n; i++) {
			if(s[i] == '0') furthest_pos = i;
			if(i == pre + x || i == n - 1) {
				if(furthest_pos == -1) return false;
				pre = furthest_pos;
				furthest_pos = -1;
				cnt++;
			}
		}
		return cnt <= k;
	};

	int l = 0, r = n + 1; // [l, r)
	while(r - l > 1) {
		int mid = (l + r) / 2;
		if(ok(mid))  r = mid;
		else l = mid;
	}
	if(ok(r)) cout << r << endl;
	else cout << "-1\n";

}
