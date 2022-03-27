#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double
#define print(value) cout << value << el
#define printA(arr)                                        \
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) { \
    cout << i << " ";                                      \
  }
#define scanA(arr, len) \
  rep(i, 0, len) { cin >> arr[i]; }
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