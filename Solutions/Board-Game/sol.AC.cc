#include <cstdio>
#include <cstring>
#include <cassert>

#include <algorithm>
#include <set>
#include <map>
#include <iomanip>
#include <limits>
#include <iostream>
#include <chrono>
#include <queue>
#include <random>
#include <functional>
#include <vector>
#include <bitset>

using namespace std;

#ifdef LOCAL
#include "debug"
#else
#define debug(...)
#endif

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using usize = size_t;
using f64 = double;

template <class T>
constexpr T infty = 0;
template <>
constexpr int infty<int> = int(1e9);
template <>
constexpr int64_t infty<int64_t> = int64_t(1e18);
template <>
constexpr __int128_t infty<__int128_t> = __int128_t(1e36);
template <>
constexpr double infty<double> = 1e30;

#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fi first
#define se second

template<class T> bool chmin(T& a, T b) {
  if (a > b) { a = b; return true; }
  return false;
}
template<class T> bool chmax(T& a, T b) {
  if (a < b) { a = b; return true; }
  return false;
}

constexpr usize maxn = 200010;

i32 N, K, pos[maxn], dis[maxn], len[maxn];

int main() {
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  cin >> N >> K;
  rep (i, 1, N) rep (j, 1, K) {
    i32 C;
    cin >> C;
    pos[C] = i;
  }
  const i32 V = N * K;
  rep (x, 1, V) {
    chmax(dis[x], 1);
    bool lst = true;
    for (i32 y = 2 * x; y <= V; y += x) {
      if (pos[x] % N + 1 == pos[y]) {
        chmax(dis[y], dis[x] + 1);
        lst = false;
      }
    }
    if (lst) chmax(len[pos[x] % N + 1], dis[x]);
  }
  i64 ans = 0;
  rep (i, 1, N) ans += min(len[i], N);
  cout << ans << '\n';
  return 0;
}