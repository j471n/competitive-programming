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
  int d;
  string s;
  cin >> d >> s;

  string ans = "No";

  for (int i = 0; i < d; i++) {
    if (s[i] == '0' || s[i] == '5') {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
