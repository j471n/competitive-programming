/*
 * Problem Name - Growing Rivalry
 * Problem Link -https://www.codechef.com/CDAY2022/problems/CODEA2
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
#define len(n) n.length()
#define sz(n) n.size()
#define read(n)                                                                \
  int n;                                                                       \
  cin >> n;
#define readll(n)                                                              \
  ll n;                                                                        \
  cin >> n;
#define readstring(s)                                                          \
  string s;                                                                    \
  cin >> s;
#define write(n) cout << n << el;

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  read(n);
  readstring(s);

  int a = count(all(s), 'A');
  int b = count(all(s), 'B');

  if (a > b) {
    write("Alice");
  } else {
    write("Bob")
  }
}

//---------------------- Solution Ends Here ----------------------

int main() { solve(); }
