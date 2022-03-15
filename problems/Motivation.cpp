#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// x = hard disk space in GB
// n = no. of movies in (s, r) = (space required, IMDB rating);

void solve()
{
  int n, x, s, r, maxSize = 0;
  cin >> n >> x;

  while (n--)
  {
    cin >> s >> r;

    if (s > x)
      continue;
    else
    {
      if (r > maxSize)
      {
        maxSize = r;
      }
    }
  }

  cout << maxSize << endl;
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
