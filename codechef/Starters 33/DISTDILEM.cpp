/*
 * Problem Link - https://www.codechef.com/START33D/problems/DISTDILEM
 * Solution By - Jatin Sharma
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
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define write(n) cout << n << el;

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  read(n);
  vi arr(n);
  ll sum = 0;

  rep0(i, n) {
    cin >> arr[i];
    sum += arr[i];
  }

  set<int> distinct;

  int i = 1;
  ll setSum = 0;

  while (setSum <= sum) {
    distinct.insert(i);
    setSum += i;
    i++;
  }

  write(distinct.size() - 1);
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
