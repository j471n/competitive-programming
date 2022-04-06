/*
 * Problem Link - https://www.codechef.com/START33D/problems/NONADJFLIP
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

  string s;
  cin >> s;

  int ones = count(all(s), '1');

  if (ones == 0) {
    write(0);
    return;
  }

  rep0(i, n) {
    if (s[i + 1] == '1' and s[i] == '1') {
      write(2);
      return;
    }
  }

  write(1);
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
