// https://www.codechef.com/problems/COVID19
// Problem Code: COVID19

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
  int n;
  cin >> n;

  // Intializing array and taking input
  int arr[n];
  rep(i, 0, n) { cin >> arr[i]; }

  // temp vector array to get the difference
  vi x;
  rep(i, 0, n - 1) { x.pb(arr[i + 1] - arr[i]); }

  int count = 1, mxi = 1, mni = INT_MAX;

  rep(i, 0, x.size()) {
    if (x[i] <= 2) {
      count++;
    } else {
      mxi = max(count, mxi);
      mni = min(mni, count);
      count = 1;
    }
  }

  cout << min(mni, count) << " " << max(mxi, count) << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}