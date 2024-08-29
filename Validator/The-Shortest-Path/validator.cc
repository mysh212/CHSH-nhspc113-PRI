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

#include "testlib.h"

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

struct dsu {
  vector<int> p;
  vector<int> siz;

  dsu(int n) : p(n), siz(n, 1) {
    iota(p.begin(), p.end(), 0);
  }

  inline int get(int x) {
    return (x == p[x] ? x : (p[x] = get(p[x])));
  }

  inline int size(int x) {
    return siz[get(x)];
  }

  inline bool same(int x, int y) {
    return get(x) == get(y);
  }

  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if (x != y) {
      if (siz[x] > siz[y]) {
        swap(x, y);
      }
      p[x] = y;
      siz[y] += siz[x];
      return true;
    }
    return false;
  }
};

int main(int argc, char *argv[]) {

  registerValidation(argc, argv);

  const int N = inf.readInt(1, 100000, "N");
  inf.readSpace();
  const i64 mxM = min<i64>(100000, i64(N) * (N - 1) / 2);
  const int M = inf.readInt(N - 1, mxM, "M");
  inf.readEoln();

  dsu d(N);
  set<pair<int, int>> edges;
  for (int i = 0; i < M; i++) {
    const int u = inf.readInt(1, N, "u");
    inf.readSpace();
    const int v = inf.readInt(1, N, "v");
    inf.readEoln();

    ensuref(u != v, "Graph can't contain loops");
    ensuref(not edges.contains(minmax(u, v)), "Graph can't contains multiple edges");

    d.unite(u - 1, v - 1);
    edges.emplace(minmax(u, v));
  }

  inf.readEof();

  for (int i = 0; i < N; i++) {
    if (d.get(i) != i) continue;
    ensuref(d.size(i) == N, "Graph is not connected.");
  }
  return 0;
}