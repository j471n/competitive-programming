#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
// typedef vector<int> vi;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int x, y, a, b;
  cin >> x >> y >> a >> b ;

  int win = 2;

  // if((x==a) || (x==b) || (y==a) || (y==b)){
  //   cout << 0 << el;
  // } 

  if(((x==a) || (x==b)) && ((y==b) || (y==a))){
    win -= 2;
  }
  else if ((x==a) || (x==b)){
    win--;
  } else if((y==b) || (y==a)){
    win--;
  }

  cout << win << el;

}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}