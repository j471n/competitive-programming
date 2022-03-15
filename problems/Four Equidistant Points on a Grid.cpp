#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve(){
	int d; cin >> d;

	if (d%2==1){
		cout << "-1" << endl;
	} else {
	    cout << d/2 << " " << 0 << endl;
    	cout << d/2 << " " << d << endl;
    	cout << 0 << " " << d / 2 << endl;
    	cout << d << " " << d / 2 << endl;
	}
}	
	
//---------------------- Solution Ends Here ----------------------
int main (){
	solve();
}



