#include <bits/stdc++.h>

#define el "\n"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, b) for (int i = 0; i < b; i++)
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve() {
  int age;
  cin >> age;
  if (age >= 1 and age <= 18) {
    cout << "Children" << el;
  } else if (age >= 19 && age <= 55) {
    cout << "Citizens" << el;
  } else if (age > 55) {
    cout << "Senior Citizens " << el;
  }
}
//---------------------- Solution Ends Here ----------------------

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
