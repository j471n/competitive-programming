/*
 * Problem Name - Min Max Equality
 * Problem Link - https://www.codechef.com/APRIL221D/problems/MINMAXEQ
 * Solution By - nitin_2410
 * Solution Link - https://www.codechef.com/viewsolution/62686323
 */

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ppb pop_back
#define pii pair<ll int, ll int>
#define vi vector<ll int>
#define vvi vector<vector<long long>>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define all(a) (a).begin(), (a).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define fi first
#define se second
#define endl '\n'
long double eps = 1e-9;
const ll int maxn = 1e17;
const ll int mod = 998244353;
using namespace std;

ll help(ll num, ll no) {
  ll left = max(0ll, num - no);
  ll s = left / (no + 1);
  ll r = left % (no + 1);
  return (no + 1 - r) * ((s * (s - 1)) / 2) + r * ((s * (s + 1)) / 2);
}

ll solve(pii p) { return help(p.fi, p.se) - help(p.fi, p.se + 1); }

struct cmp {
  bool operator()(pii a, pii b) { return solve(a) < solve(b); }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    priority_queue<pii, vector<pii>, cmp> mu;
    int i = 0;
    while (i < n) {
      int j = i, c = 0;
      while (j < n && a[j] == a[i]) {
        j++;
        c++;
      }
      mu.push({c, 0});
      i = j;
    }
    while (k > 0) {
      pii p = mu.top();
      mu.pop();
      p.se++;
      mu.push(p);
      k--;
    }
    ll ans = 0;
    while (!mu.empty()) {
      pii p = mu.top();
      mu.pop();

      ans += (help(p.fi, p.se));
    }
    cout << ans + n << endl;
  }
  return 0;
}