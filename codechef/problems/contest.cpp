#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
// typedef vector<int> vi;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int a, b, c, d, sum, x,y, sub, mul, div;
  cin >> a >> b >> c >> d;


  for(int i=0; i<10000; ++i){
    x= i;
    y=i+1;

    sum = x+y;
    sub = x-y;
    mul = x*y;
    div = abs(x/y);

    bool sumCheck =  (sum==a) || (sum ==b) || (sum==c) || (sum==d);
    bool subCheck =  (sub==a) || (sub ==b) || (sub==c) || (sub==d);
    bool mulCheck =  (mul==a) || (mul ==b) || (mul==c) || (mul==d);
    bool divCheck =  (div==a) || (div ==b) || (div==c) || (div==d);

    if(sumCheck && subCheck && mulCheck && divCheck){
      cout << x << " " << y << el;
    }

  }

  cout << -1 << " " << -1 << el;

}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}