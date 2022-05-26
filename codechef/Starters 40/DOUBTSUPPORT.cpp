/*
 * Solution By : Jatin Sharma
 * Language : C++
 */

#include <bits/stdc++.h>
#define el "\n"
#define sp " "
#define ll long long
#define write(n) cout << n << el
#define readll(n) \
  ll n;           \
  cin >> n;
#define fastrun                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
//===================== SOLUTION : START ==========================

void solve() {
  readll(rating);
  (rating <= 1600) ? write("Yes") : write("No");
}
//===================== SOLUTION :  END  ==========================

int main() {
  fastrun;
  solve();
}
