#include <bits/stdc++.h>

using namespace std;
#define ll long long int

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int count1 = 0, count0 = 0, count1o = 0, count0o = 0, countt1 = 0,
      countt0 = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1' && (i % 2 == 0)) {
      count1++;
      countt1++;
    } else if (s[i] == '0' && (i % 2 == 1)) {
      count0++;
      countt0++;
    }
    if (s[i] == '1' && (i % 2 == 1)) {
      count1o++;
      countt1++;
    } else if (s[i] == '0' && (i % 2 == 0)) {
      count0o++;
      countt0++;
    }
  }
  int ans = 0;
  int ls = s.length();
  if (ls & 1)
    ls--;
  bool ex1 = true, ex2 = true;
  for (int i = 0; i <= ls - 2; i += 2) {
    if (s[i] == '0' && s[i + 1] == '1') {
    } else
      ex1 = false;

    if (s[i] == '1' && s[i + 1] == '0') {
    } else
      ex2 = false;
  }

  if (ex1) {
    cout << ls / 2 << endl;
    return;
  } else if (ex2) {
    if (s[ls] == '1') {
      cout << (ls / 2) << endl;
      return;
    }
  }

  if (countt1 == countt0)
    ans = countt1 - 1;
  else if (countt1 < countt0)
    ans = countt1;
  else if (countt1 > countt0)
    ans = countt0;
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}