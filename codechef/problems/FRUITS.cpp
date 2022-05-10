#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// n = number of apples
// m = number of oranges
// k = gold coin chef has

void solve(){

	int n, m, k;
	cin >> n >> m >> k;

	if (n > m){
		while(k--){
			if (n==m){
				break;
			}
			++m;
		}
	} else if (n < m){
		while(k--){
			if (n==m){
				break;
			} 
			++n;
		}
	} 

	cout << abs(n - m) << endl;
	
}
	
//---------------------- Solution Ends Here ----------------------

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}