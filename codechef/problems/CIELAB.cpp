#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int a, b;
  cin >> a >> b;

  int k = a - b;
  if (k % 10 == 9) {
    k--;
  } else {
    k++;
  }

  cout << k << endl;
  return 0;
}
