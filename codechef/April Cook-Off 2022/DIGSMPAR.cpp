#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, b) for (int i = 0; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

ll digitSum(ll n) {
  ll sum = 0, m;
  while (n > 0) {
    m = n % 10;
    sum = sum + m;
    n = n / 10;
  }
  return sum;
}

ll getEvenDigitSum(ll n) {
  ll s = digitSum(n);
  if (s % 2 == 0) {
    return n;
  }
  return getEvenDigitSum(n + 1);
}

ll getOddDigitSum(ll n) {
  ll s = digitSum(n);
  if (s % 2 != 0) {
    return n;
  }
  return getOddDigitSum(n + 1);
}

void solve() {
  int n1;
  cin >> n1;

  ll ans = 0;

  int i = 1;
  ll initialSum = digitSum(n1);
  ll secondSum = digitSum(n1 + 1);

  if (initialSum % 2 == 0) {
    ans = getOddDigitSum(n1 + 1);
  } else {
    ans = getEvenDigitSum(n1 + 1);
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