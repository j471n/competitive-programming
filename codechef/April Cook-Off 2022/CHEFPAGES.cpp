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
  int n1, n2;
  cin >> n1 >> n2;

  string ans = "";
  if (n1 == 0) {
    ans = "https://www.codechef.com/practice";
  } else if (n1 == 1 && n2 == 0) {
    ans = "https://www.codechef.com/contests";
  } else if (n1 == 1 && n2 == 1) {
    ans = "https://discuss.codechef.com";
  }
  cout << ans << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  solve();
}