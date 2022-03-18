#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// Bearland has infinitely many cities, numbered starting from 1. Some pairs of cities are connected with bidirectional roads:
// There are roads 1-2, 3-4, 5-6, 7-8, and so on (there is a road between cities 2*i+1 and 2*i+2 for every non-negative integer i).
// There are roads 1-3, 3-5, 5-7, 7-9, ... (between every two consecutive odd numbers).
// There are roads 2-4, 4-6, 6-8, 8-10, ... (between every two consecutive even numbers).

//---------------------- Solution Starts Here ----------------------

void solve()
{
  ll a, b;
  cin >> a >> b;
  ((abs(a - b) == 1 && max(a, b) % 2 == 0) || (abs(a - b) == 2)) ? cout << "YES" << endl : cout << "NO" << endl;
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
