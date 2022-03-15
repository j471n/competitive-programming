#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// x = f(N) = (0.143*N)^N
// Print floor(x) if  x− floor(x) < 0.5
// Otherwise, print floor(x) + 1

void solve()
{
  int n;
  cin >> n;
  float x = pow((0.143 * n), n);

  (x - floor(x)) < 0.5 ? cout << floor(x) << endl : cout << floor(x) + 1 << endl;
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
