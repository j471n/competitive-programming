#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int x, y;
  cin >> x >> y;

  int credCoins = x * y;
  if (credCoins >= 100) {
    cout << credCoins / 100 << el;
  } else {
    cout << 0 << el;
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