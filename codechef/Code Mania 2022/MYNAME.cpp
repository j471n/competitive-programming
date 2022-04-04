/*
  Problem : https://www.codechef.com/COMA2022/problems/MYNAME
  solution by : rahulku123
  solution link : https://www.codechef.com/viewsolution/61946657
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define surukro()                                                              \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t-- > 0)
#define speed                                                                  \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define endl "\n"
#define mod 1000000007

int find(string X, string Y, string Z, int m, int n, int o) {
  int L[m + 1][n + 1][o + 1];

  /* Following steps build L[m+1][n+1][o+1] in
     bottom up fashion. Note that L[i][j][k]
     contains length of LCS of X[0..i-1] and
     Y[0..j-1]  and Z[0.....k-1]*/
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      for (int k = 0; k <= o; k++) {
        if (i == 0 || j == 0 || k == 0)
          L[i][j][k] = 0;

        else if (X[i - 1] == Y[j - 1] && X[i - 1] == Z[k - 1])
          L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;

        else
          L[i][j][k] = max(max(L[i - 1][j][k], L[i][j - 1][k]), L[i][j][k - 1]);
      }
    }
  }

  /* L[m][n][o] contains length of LCS for
    X[0..n-1] and Y[0..m-1] and Z[0..o-1]*/
  return L[m][n][o];
}
int main() {
  speed string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  int n = s1.length();
  int m = s2.length();
  int o = s3.length();
  cout << find(s1, s2, s3, n, m, o);
  return 0;
}