#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, b) for (int i = 0; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  if (max(a, b) - min(a, b) > 2 || max(a, b) - min(a, b) <= 0)
    cout << 0 << el;
  else if (min(a, b) == 1 || max(a, b) == n || max(a, b) - min(a, b) == 2)
    cout << 1 << el;
  else
    cout << 2 << el;
}
//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
