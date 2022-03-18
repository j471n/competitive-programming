#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// j = jacketCost
// s = socCost
// m = money

void solve() {
  int j, s, m, leftMoney, count = 0;
  cin >> j >> s >> m;

  leftMoney = m - j;

  while (leftMoney >= s) {
    leftMoney -= s;
    count++;
  }

  if (count % 2) {
    cout << "Unlucky Chef" << el;
  } else {
    cout << "Lucky Chef" << el;
  }
}

//---------------------- Solution Ends Here ----------------------
int main() {
  solve();
}