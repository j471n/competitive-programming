/*
 * Problem Name - Prime Sum
 * Problem Link - https://www.codechef.com/APRIL221D/problems/PRIMESM
 * Solution By - Jatin Sharma
 */

#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rep0(i, b) for (ll i = 0; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(s) s.begin(), s.end()
#define len(n) n.length()
#define sz(n) n.size()
#define pie 3.14159265358979323846
#define mine(a) (*min_element(all(a)))
#define maxe(a) (*max_element(all(a)))
#define counta(arr, find) count(arr, arr + sizeof(a) / sizeof(a[0]), find)
#define countof(v, find) count(all(v), find)
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define readll(n)                                                              \
  ll n;                                                                        \
  cin >> n;
#define readstring(s)                                                          \
  string s;                                                                    \
  cin >> s;
#define write(n) cout << n << el
#define print(a, n)                                                            \
  rep0(i, n) { cout << a[i] << " "; }
#define tc()                                                                   \
  ll t;                                                                        \
  cin >> t;                                                                    \
  while (t--)
#define fastrun                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;

//---------------------- Solution Starts Here ----------------------

// The function runs recursive in nature to return GCD
ll gcd(ll a, ll b) {
  if (a == 0) // If a becomes zero
    return b; // b is the GCD
  if (b == 0) // If b becomes zero
    return a; // a is the GCD
  if (a == b) // The case of equal numbers
    return a; // return any one of them
  if (a > b)  // if a is greater subtract b
    return gcd(a - b, b);
  return gcd(a, b - a); // otherwise subtract a
}

void solve() {
  readll(x);
  readll(y);
  (x == 1 or y == 1) ? write(-1) : (gcd(x, y) == 1) ? write(1) : write(0);
}

//---------------------- Solution Ends Here ----------------------

int main() {
  fastrun;
  tc() { solve(); }
}
