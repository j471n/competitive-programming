/*
 * Solution By : Jatin Sharma (jatinsharma009)
 * Language : C++
 * Problem Name : Pair Pain
 * Problem : https://www.codechef.com/LTIME107C/problems/PAIRPAIN
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
#define vll vector<ll>
#define pb push_back
#define all(s) s.begin(), s.end()
#define len(n) n.length()
#define sz(n) n.size()
#define pie 3.14159265358979323846
#define mine(a) (*min_element(all(a)))
#define maxe(a) (*max_element(all(a)))
#define arraySize(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define counta(arr, find) count(arr, arr + sizeof(a) / sizeof(a[0]), find)
#define countof(v, find) count(all(v), find)
#define write(n) cout << n << el
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define readll(n)                                                              \
  ll n;                                                                        \
  cin >> n;
#define readstring(s)                                                          \
  string s;                                                                    \
  cin >> s;
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

void solve() {

  readll(n);
  vll arr(n);
  rep0(i, n) { cin >> arr[i]; }

  ll ones = 0, twos = 0;

  rep0(i, n) {
    if (arr[i] == 1)
      ones++;
    if (arr[i] == 2)
      twos++;
  }

  ll ans = ones * (n - ones);

  if (ones > 1) {
    ans += (ones * (ones - 1)) / 2;
  }
  if (twos > 1) {
    ans += (twos * (twos - 1)) / 2;
  }
  cout << ans << endl;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  fastrun;
  tc() { solve(); }
}
