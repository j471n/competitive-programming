/*
 * Problem Name - Dazzling GCD Pair
 * Problem Link - https://www.codechef.com/APRIL221D/problems/NOTUNIT
 * Solution By - Jatin Sharma
 */

#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rep0(i, b) for (ll i = 0; i < b; i++)
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
#define counta(arr, find) count(arr, arr + sizeof(a) / sizeof(a[0]), find)
#define countof(v, find) count(all(v), find)
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define readll(n)                                                              \
  ll n;                                                                        \
  cin >> n;
#define readstring(s)                                                          \
  string s;                                                                    \
  cin >> s;
#define write(n) cout << n << el
#define print(a, n)                                                            \
  rep0(i, n) { cout << a[i] << " "; }

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  read(a);
  read(b);

  int i = -1;

  if (a % 2 == 0) {
    (a + 2 <= b) ? cout << a << " " << a + 2 << el : write(i);
  } else if (a % 3 == 0) {
    (a + 3 <= b) ? cout << a << " " << a + 3 << el : write(i);
  } else {
    (a + 3 <= b) ? cout << a + 1 << " " << a + 3 << el : write(i);
  }
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
