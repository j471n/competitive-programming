/*
 * Problem Link - https://www.codechef.com/START33D/problems/BRKNLIFE
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
  int n, m;
  cin >> n >> m;
  bool chk = false;
  string s, t;
  cin >> s >> t;
  for (char i = 'a'; i < 'f'; i++) {
    int k = 0;
    string s1(s.size(), 0);
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == '?') {
        s1[j] = i;
      } else {
        s1[j] = s[j];
      }
      if (s1[j] == t[k] and k < m) {
        k++;
      }
    }
    if (k != m) {
      cout << s1 << endl;
      chk = true;
      break;
    }
  }
  if (!chk)
    cout << -1 << endl;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
