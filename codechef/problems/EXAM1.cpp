#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// n = number of questions
// s = correct answers 
// u = user's answer

void solve() {
  int n, score = 0;
  cin >> n;
  string s, u;
  cin >> s;
  cin >> u;
  for (int i = 0; i < n; ++i) {
    if (s[i] == u[i])
      score++;
    else {
      if (u[i] == 'N')
        continue;
      else {
        i++;
      }
    }
  }
  cout << score << endl;
}

//---------------------- Solution Ends Here ----------------------
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}