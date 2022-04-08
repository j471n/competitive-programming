/*
 * Problem Name - Pass or Fail
 * Problem Link - https://www.codechef.com/CDAY2022/problems/CODEA3
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
#define len(n) n.length()
#define sz(n) n.size()
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

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  read(n);
  bool pass = false;

  while (n--) {
    read(m);
    read(p);

    if (m > 3 && p > 3 && (m + p) / 2.0 >= 7.5) {
      if (m == 10 or p == 10)
        pass = true;
    }
  }

  (pass) ? write("Genius") : write("Not Genius Yet");
}

//---------------------- Solution Ends Here ----------------------

int main() {
  // int t;
  // cin >> t;
  // while (t--) {
  solve();
  // }
}
