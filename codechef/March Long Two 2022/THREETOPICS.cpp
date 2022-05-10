#include <bits/stdc++.h>

#define el "\n"
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int x;
  int arr[3];

  for (int i = 0; i < 3; ++i){
    cin >> arr[i];
  }
  cin >> x;
  for (int i = 0; i < 3; ++i){
    if(x == arr[i]) {
      cout << "yes" << el;
      exit(0);
    }
  }
  cout << "No" << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  solve();
}