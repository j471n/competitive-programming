/*
 * Problem Link - https://www.codechef.com/CDAY2022/problems/CODEA5
 * Problem Name - Alice and Keppler
 * Solution By - ujjwalsingh30
 * Solution link - https://www.codechef.com/viewsolution/62230862
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<int> w(m);
  for (int i = 0; i < m; i++) {
    cin >> w[i];
  }
  sort(w.begin(), w.end());
  long long total = accumulate(w.begin(), w.end(), 0);
  vector<long long> dp(1, 0);
  int sum = 0;
  for (int i = m - 1; i >= 0; i--) {
    vector<long long> new_dp(sum + w[i] + 1, -1);
    for (int j = 0; j <= sum; j++) {
      if (dp[j] < 0) {
        continue;
      }
      new_dp[j] =
          max(new_dp[j], dp[j] + (sum + w[i] - j) * (total - (sum + w[i] - j)));
      new_dp[j + w[i]] =
          max(new_dp[j + w[i]], dp[j] + (j + w[i]) * (total - (j + w[i])));
    }
    swap(dp, new_dp);
    sum += w[i];
  }
  long long ans = -1;
  for (int j = 0; j <= sum; j++) {
    if (dp[j] >= 0) {
      ans = max(ans, dp[j] + j * (total - j) * (n - m - 1));
    }
  }
  cout << ans << '\n';
  return 0;
}