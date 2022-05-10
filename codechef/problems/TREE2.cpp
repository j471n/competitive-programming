/*
 * Solution By : Jatin Sharma
 * Language : C++
 */

#include <bits/stdc++.h>

#define el "\n"
#define sp " "
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rep0(i, b) for (ll i = 0; i < b; i++)
#define repe(i, a, b) for (ll i = a; i <= b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vs vector<string>
#define vll vector<ll>
#define mii map<int, int>
#define si set<int>
#define pb push_back
#define all(s) s.begin(), s.end()
#define len(n) n.length()
#define sz(n) n.size()
#define F first
#define S second
#define pie 3.14159265358979323846
#define mine(a) (*min_element(all(a)))
#define maxe(a) (*max_element(all(a)))
#define arraySize(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define counta(arr, find) count(arr, arr + sizeof(a) / sizeof(a[0]), find)
#define countof(v, find) count(all(v), find)
#define write(n) cout << n << el
#define read(n) \
  int n;        \
  cin >> n;

#define readVector(arr) \
  for (auto& i : arr) { \
    cin >> i;           \
  }
#define readll(n) \
  ll n;           \
  cin >> n;
#define readstring(s) \
  string s;           \
  cin >> s;
#define print(a, n)      \
  rep0(i, n) {           \
    cout << a[i] << " "; \
  }
#define tc() \
  ll t;      \
  cin >> t;  \
  while (t--)
#define fastrun                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

//===================== FUNCTIONS: START ==========================

/* It check if the number is even or odd */
inline bool isEven(ll num) {
  if (num % 2 == 0)
    return true;
  return false;
}

inline bool contains(string s, char c) {
  rep0(i, len(s)) {
    if (s[i] == c)
      return true;
  }
  return false;
}

//===================== FUNCTIONS : END ===========================

//---------------------- Solution Starts Here ---------------------

void solve() {
  read(n);
  si heights;
  rep0(i, n) {
    read(h);
    if (h > 0)
      heights.insert(h);
  }
  write(sz(heights));
}

//---------------------- Solution Ends Here ----------------------

int main() {
  fastrun;
  tc() {
    solve();
  }
  // solve();
}
