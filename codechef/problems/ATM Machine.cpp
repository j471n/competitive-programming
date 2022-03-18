#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve()
{
  int n, k, amount;
  cin >> n >> k;
  string res = "";

  while (n--)
  {
    cin >> amount;

    if (amount <= k)
    {
      k -= amount;
      res += "1";
    }
    else
    {
      res += "0";
    }
  }
  cout << res << endl;
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
