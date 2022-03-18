#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// Chefland has 2
//  different types of coconut, type A
//  and type B
// . Type A
//  contains only xa
//  milliliters of coconut water and type B
//  contains only xb
//  grams of coconut pulp. Chef's nutritionist has advised him to consume Xa
//  milliliters of coconut water and Xb
//  grams of coconut pulp every week in the summer. Find the total number of coconuts (type A
//  + type B
// ) that Chef should buy each week to keep himself active in the hot weather.

void solve()
{
  int x1, x2, Xa, Xb;
  cin >> x1 >> x2 >> Xa >> Xb;
  cout << Xa / x1 + Xb / x2 << endl;
}

//---------------------- Solution Ends Here ----------------------
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
