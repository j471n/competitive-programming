/*
 * Problem Name - Grid x Grid
 * Problem Link -https://www.codechef.com/CDAY2022/problems/CODEA4
 * Solution By - ujjwalsingh30
 * Solution link - https://www.codechef.com/viewsolution/62230704
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    auto b = a;
    bool ok = true;
    for (int s = 1; s < n + m; s++) {
      for (int i = 0; i < n; i++) {
        int j = s - i;
        if (j < 0 || j >= m) {
          continue;
        }
        int x = b[i][j];
        if (i > 0) {
          if (a[i - 1][j] > x) {
            ok = false;
            break;
          }
          x -= a[i - 1][j];
          a[i - 1][j] = 0;
        }
        if (j > 0) {
          if (a[i][j - 1] < x) {
            ok = false;
            break;
          }
          a[i][j - 1] -= x;
          x = 0;
        }
        if (x > 0) {
          ok = false;
          break;
        }
      }
      if (!ok) {
        break;
      }
    }
    a[n - 1][m - 1] -= b[0][0];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        ok &= (a[i][j] == 0);
      }
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
  return 0;
}