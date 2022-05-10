#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// n = no. of boxes
// x = box that contains coin
// s = no. of swaps;

void solve()
{
  int n, x, s, a, b;
  cin >> n >> x >> s;

  // int coinInBox = x;
  while (s--)
  {
    cin >> a >> b;

    // if coinInBox a and we are swapping it with b
    // 		then coin will be in b
    // else if coinInBox b and we are swapping it with a
    // 		then coin will be in a
    // else : when swapping box doesn't cointain coin then swap them easily (coin will remain in the same box)

    (a == x) ? x = b : (b == x) ? x = a : x = x;
  }

  cout << x << endl;
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
