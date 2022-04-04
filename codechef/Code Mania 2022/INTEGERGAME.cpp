/*
  Problem : https://www.codechef.com/COMA2022/problems/INTEGERGAME
  solution by : amandeep99
  solution link : https://www.codechef.com/viewsolution/61951336
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;
void main() {
  ll n, i, j, k, ans = 1;
  cin >> n;
  unordered_map<ll, ll> m;
  for (i = 2; i <= n; i++) {
    ll c = 0, d = i;
    while (d % 2 == 0) {
      c++;
      d /= 2;
    }
    m[2] += c;
    for (j = 3; j <= n; j += 2) {
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
    ans = (ans * (itr.second + 1)) % mod;
  }
  cout << ans << endl;
}