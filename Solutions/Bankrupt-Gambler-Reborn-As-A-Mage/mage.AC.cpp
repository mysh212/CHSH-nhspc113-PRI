#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
using matrix = vector<vector<ll>>;

matrix operator*(const matrix &A, const matrix &B) {
    matrix C(A.size(), vector<ll>(B.size()));
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A[0].size(); j++) {
            for (int k = 0; k < B[0].size(); k++) {
                C[i][k] += A[i][j] * B[j][k] % MOD;
                C[i][k] %= MOD;
            }
        }
    }
    return C;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    matrix A = {{0, 1}, {1, 1}}, V = {{1}, {1}};
    while (n) {
        if (n & 1) {
            V = A * V;
        }
        A = A * A;
        n >>= 1;
    }
    cout << (V[1][0] - 1 + MOD) % MOD << '\n';
}