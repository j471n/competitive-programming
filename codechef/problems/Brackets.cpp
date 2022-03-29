// https://www.codechef.com/problems/BRACKETS
// BRACKETS

#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

// Algo
/*  FUNCTION F( S - a valid parentheses sequence )
  BEGIN
    balance = 0
    max_balance = 0
    FOR index FROM 1 TO LENGTH(S)
    BEGIN
      if S[index] == '(' then balance = balance + 1
      if S[index] == ')' then balance = balance - 1
      max_balance = max( max_balance, balance )
    END
    RETURN max_balance
  END*/

// validating paragraph according to the algo given
int validPara(string s) {
  int balance = 0;
  int MAX_BALANCE = 0;

  rep(i, 0, s.length()) {
    if (s[i] == '(') {
      balance++;
    } else if (s[i] == ')') {
      balance--;
    }
    MAX_BALANCE = max(MAX_BALANCE, balance);
  }

  return MAX_BALANCE;
}

void solve() {
  string s;
  cin >> s;

  int n = validPara(s);
  string res = "";

  rep(i, 0, n) { res += "("; }
  rep(i, 0, n) { res += ")"; }

  cout << res << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}