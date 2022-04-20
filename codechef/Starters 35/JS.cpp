/*
 * Solution By : Jatin Sharma
 * Language : C++
 * Problem Name : Jump to Sibling
 * Problem : https://www.codechef.com/START35B/problems/JS
 */

#include <bits/stdc++.h>

#define el "\n"
#define sp " "
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rep0(i, b) for (ll i = 0; i < b; i++)
#define repe(i, a, b) for (ll i = a; i <= b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(s) s.begin(), s.end()
#define len(n) n.length()
#define sz(n) n.size()
#define pie 3.14159265358979323846
#define mine(a) (*min_element(all(a)))
#define maxe(a) (*max_element(all(a)))
#define arraySize(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define counta(arr, find) count(arr, arr + sizeof(a) / sizeof(a[0]), find)
#define countof(v, find) count(all(v), find)
#define write(n) cout << n << el
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define readll(n)                                                              \
  ll n;                                                                        \
  cin >> n;
#define readstring(s)                                                          \
  string s;                                                                    \
  cin >> s;
#define print(a, n)                                                            \
  rep0(i, n) { cout << a[i] << " "; }
#define tc()                                                                   \
  ll t;                                                                        \
  cin >> t;                                                                    \
  while (t--)
#define fastrun                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  readll(n);
  vll a(n);
  vll b(n);

  rep0(i, n) { cin >> a[i]; }

  ll ans = 0;
  ll cnt = 0;
  b[0] = 0;

  if ((a[0] % 2) == (a[n - 1] % 2)) {
    rep(i, 1, n) {
      if ((a[i] % 2) == (a[0] % 2)) {
        ans++;
      }
    }
  } else {
    rep(i, 1, n) {
      if (a[0] % 2 != a[i] % 2) {
        b[i] = b[i - 1] + 1;
      } else {
        b[i] = b[i - 1];
      }
    }
    ans = b[n - 1];
    rep(i, 1, n) {
      if (a[i] % 2 == a[0] % 2) {
        cnt++;
        ans = min(ans, cnt + b[n - 1] - b[i]);
      }
    }
  }
  write(ans);
}

//---------------------- Solution Ends Here ----------------------

int main() {
  fastrun;
  tc() { solve(); }
  // solve();
}
