/*
 * Problem Link - https://www.codechef.com/START33D/problems/STBMEX
 * Solution By  -  in_akshay21
 * Solution Link- https://www.codechef.com/viewsolution/62206394
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, count = 0;
    cin >> n;
    long long int i;
    int temp = 0;
    vector<long long int> v;
    for (i = 0; i < n; i++) {
      int a;
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++) {
      if (v[i] != count) {
        break;
      }
      while (v[i] == count && i < n) {
        i++;
      }
      i--;
      count++;
    }
    if (count == 1) {
      cout << -1 << endl;
    } else if (count == 0) {
      cout << v[0] - 1 << endl;
    } else if (count > v[n - 1]) {
      cout << 0 << endl;
    } else {
      long long int res = 0;
      for (i = 0; i < n; i++) {
        if (v[i] > count) {
          long long int t1 = v[i];
          long long int count1 = 0;
          while (v[i] == t1 && i < n) {
            while (v[i] == t1 && i < n) {
              i++;
            }
            t1++;
            count1++;
          }
          if (count1 >= count - 1) {
            res++;
          }
          i--;
        }
      }
      cout << res << endl;
    }
  }
}