/*
 * Problem Link - https://www.codechef.com/START33D/problems/MTE
 * Solution By - Jatin Sharma
 */

#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, b) for (int i = 0; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(s) s.begin(), s.end()
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define write(n) cout << n << el;

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  read(n);
  vll v(n);
  ll e = 0;
  rep0(i, n) {
    cin >> v[i];
    if (v[i] % 2 == 0)
      e += 1;
  }
  if ((n - e) % 2 == 0) {
    write(min(e, (n - e) / 2));
  } else {
    write(e);
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
