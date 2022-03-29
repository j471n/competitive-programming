#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

void checkChar(int arr[], char stringChar, char checkChar, int index) {
  if (stringChar == checkChar) {
    arr[index]++;
  }
}

void solve() {
  int n;
  cin >> n;

  int arr[6] = {0};
  string s;

  while (n--) {
    cin >> s;

    rep(i, 0, s.length()) {
      checkChar(arr, s[i], 'c', 0);
      checkChar(arr, s[i], 'o', 1);
      checkChar(arr, s[i], 'd', 2);
      checkChar(arr, s[i], 'e', 3);
      checkChar(arr, s[i], 'h', 4);
      checkChar(arr, s[i], 'f', 5);
    }
  }

  arr[0] = arr[0] / 2;
  arr[3] = arr[3] / 2;
  sort(arr, arr + 6);

  cout << arr[0] << el;
}

//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}