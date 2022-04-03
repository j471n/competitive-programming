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
  int n;
  cin >> n;
  vi arr(n);
  rep0(i, n) { cin >> arr[i]; }

  int two = 0, zero = 0;

  for (auto i : arr) {
    if (i == 2)
      two++;
    else if (i == 0)
      zero++;
  }

  cout << ((two * (two - 1)) / 2) + ((zero * (zero - 1)) / 2) << el;
}
//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
