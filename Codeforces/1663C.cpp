#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int n;
  cin >> n;

  ll sum = 0;
  int arr[n];
  rep(i, 0, n) {
    cin >> arr[i];
    sum += arr[i];
  }
  cout << sum << el;
}
//---------------------- Solution Ends Here ----------------------

int main() {
  // int t;
  // cin >> t;
  // while (t--) {
  solve();
  // }
}