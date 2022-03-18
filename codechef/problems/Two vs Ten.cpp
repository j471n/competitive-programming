#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve()
{
  ll x;
  cin >> x;
  (x % 10 == 0) ? cout << "0" << endl : (x % 5 == 0) ? cout << "1" << endl : cout << "-1" << endl;
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