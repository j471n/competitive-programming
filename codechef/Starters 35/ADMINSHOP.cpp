/*
 * Solution By : mridul_ms8
 * Language : C++
 * Problem Name : Admins and Shopping
 * Problem : https://www.codechef.com/START35B/problems/ADMINSHOP
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  long int t;
  cin >> t;
  while (t--) {
    long long int n, x;
    cin >> n >> x;
    long long int a[n], ans = 0;
    vector<long long int> v(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      v[i] = a[i];
    }
    int m = *min_element(v.begin(), v.end());
    ans = x / m + (x % m != 0);
    cout << max(n, ans) << endl;
  }
  return 0;
}
