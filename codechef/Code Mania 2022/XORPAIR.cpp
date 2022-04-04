/*
  Problem : https://www.codechef.com/COMA2022/problems/XORPAIR
*/

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

ll M = 1e9 + 7;

int algo(int n) {
  int ans = 1;
  unordered_map<ll, ll> m;
  for (int i = 2; i <= n; i++) {
    ll c = 0, d = i;
    while (d % 2 == 0) {
      c++;
      d /= 2;
    }
    m[2] += c;
    for (int j = 3; j <= n; j += 2) {
      if (d % j == 0) {
        c = 0;
        while (d % j == 0) {
          c++;
          d /= j;
        }
        m[j] += c;
      }
    }
  }
  for (auto itr : m) {
    ans = (ans * (itr.second + 1)) % M;
  }
  return ans;
}

void solve() {
  int n;
  cin >> n;

  vi a(n);
  rep0(i, n) { cin >> a[i]; }

  int x;
  cin >> x;

  int ans = 0;
  map<int, int> mp;

  for (int i : a) {
    (mp[i ^ x] > 0) ? mp[i ^ x]-- : mp[i]++;
  }

  for (auto m : mp) {
    ans += m.second;
  }

  cout << ans << el;
}
//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
