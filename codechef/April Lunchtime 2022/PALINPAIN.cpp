/*
 * Solution By : Jatin Sharma (jatinsharma009)
 * Language : C++
 * Problem Name : Palindrome Pain
 * Problem : https://www.codechef.com/LTIME107C/problems/PALINPAIN
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
  readll(first);
  readll(second);

  if (first % 2 != 0 && second % 2 != 0) {
    write(-1);
  } else if (first == 1 || second == 1) {
    write(-1);
  }

  else {
    string str;
    if (first % 2 != 0) {
      rep0(i, second / 2) { str += 'b'; }
      rep0(i, (first - 1) / 2) { str += 'a'; }

      string temp = str;
      str += 'a';

      reverse(temp.begin(), temp.end());

      str += temp;
      write(str);

      ll k = second / 2 + (first - 1) / 2 - 1;

      swap(str[0], str[k]);
      swap(str[k + 2], str[first + second - 1]);

      write(str);
    } else if (second % 2 != 0) {
      rep0(i, first / 2) { str += 'a'; }
      rep0(i, (second - 1) / 2) { str += 'b'; }

      string temp = str;
      str += 'b';

      reverse(temp.begin(), temp.end());
      str += temp;
      write(str);

      ll k = first / 2 + (second - 1) / 2 - 1;
      swap(str[0], str[k]);
      swap(str[k + 2], str[first + second - 1]);

      write(str);

    } else {
      rep0(i, second / 2) { str += 'b'; }
      rep0(i, first / 2) { str += 'a'; }

      string temp = str;
      reverse(temp.begin(), temp.end());

      str += temp;
      write(str);

      ll k = second / 2 + first / 2 - 1;

      swap(str[0], str[k]);
      swap(str[k + 1], str[first + second - 1]);

      write(str);
    }
  }
}

//---------------------- Solution Ends Here ----------------------

int main() {
  fastrun;
  tc() { solve(); }
}
