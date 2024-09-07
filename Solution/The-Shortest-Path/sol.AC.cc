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

constexpr i64 md = i64(1e9) + 7;
constexpr usize maxn = usize(1e6);

i32 n, m, tot;
vector<i32> adj[maxn][10];
i64 dis[maxn];

void addEdge(const i32 u, const i32 v, i32 w) {
  if (w <= 9) {
    adj[u][w].push_back(v);
    return;
  }
  i32 x = ++tot, y = v;
  while (true) {
    adj[x][w % 10].push_back(y);
    w /= 10;
    if (w <= 9) {
      adj[u][w].push_back(x);
      break;
    }
    y = x;
    x = ++tot;
  }
}

int main() {
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  cin >> n >> m, tot = n;
  rep (i, 1, m) {
    i32 u, v;
    cin >> u >> v;
    addEdge(u, v, i);
    addEdge(v, u, i);
  }
  rep (i, 1, tot) dis[i] = -1;
  dis[1] = 0;
  queue<vector<i32>> q;
  q.push(vector{1});
  while (not q.empty()) {
    const auto vx = q.front(); q.pop();
    rep (d, 0, 9) {
      vector<i32> vy;
      for (const i32 &x : vx) {
        for (const i32 &y : adj[x][d]) {
          if (dis[y] == -1) {
            dis[y] = (dis[x] * 10 + d) % md;
            vy.push_back(y);
          }
        }
      }
      if (not vy.empty()) {
        q.push(vy);
      }
    }
  }
  rep (i, 2, n) cout << dis[i] << '\n';
  return 0;
}