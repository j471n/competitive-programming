#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve()
{
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  (((a + b) <= d && c <= e) || ((a + c) <= d && b <= e) || ((b + c) <= d && a <= e)) ? cout << "YES" << endl : cout << "NO" << endl;
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
