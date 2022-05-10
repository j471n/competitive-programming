#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int n, xAxis;
  cin >> n;

  (n % 2 == 0) ? xAxis = n / 2 : xAxis = -((n / 2) + 1);

  cout << xAxis << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}