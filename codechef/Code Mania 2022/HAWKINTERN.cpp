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

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  string s;
  cin >> s;

  int l = count(all(s), 'L');
  int r = count(all(s), 'R');
  int u = count(all(s), 'U');
  int d = count(all(s), 'D');

  if (l == r and u == d) {
    cout << "YES" << el;
  } else {
    cout << "NO" << el;
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
