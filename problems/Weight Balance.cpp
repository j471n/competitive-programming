#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve()
{
  int w1, w2, x1, x2, M;
  cin >> w1 >> w2 >> x1 >> x2 >> M;

  (((w2 - w1) >= (x1 * M)) && ((w2 - w1) <= (x2 * M))) ? cout << "1" << endl : cout << "0" << endl;
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
