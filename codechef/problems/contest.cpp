#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
// typedef vector<int> vi;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int s, x=1;
  cin >> s;



  int res;
      res = x*s-x*x;

    if(res==0){
      x++;
      res = (x++*s)-(x++*x++);
    }

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