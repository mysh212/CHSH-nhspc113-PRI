#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    auto ck = [&](auto self, int n) -> bool {
        if (n == 0) {
            return true;
        }
        if (n & 1) {
            return self(self, (n - 1) / 2);
        }
        if (n % 4 == 0) {
            return self(self, n / 4);
        }
        return false;
    };
    int cnt = 0, N;
    cin >> N;
    for (int i = 1; i < (1<<N); i++) {
        cnt += ck(ck, i);
    }
    cout << cnt << '\n';
}