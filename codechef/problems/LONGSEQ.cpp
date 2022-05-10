#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  string s;
  cin >> s;

  int zeros = 0, ones = 0;

  rep(i, 0, s.length()) { (s[i] == '0') ? zeros++ : ones++; }

  if (zeros == s.length() - 1 || ones == s.length() - 1) {
    cout << "Yes " << el;
  } else {
    cout << "No " << el;
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