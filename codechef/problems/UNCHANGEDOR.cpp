#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int n;
  cin >> n;
  int count = n;

  while (n) {
    count--;
    n /= 2;
  }
  cout << count << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}