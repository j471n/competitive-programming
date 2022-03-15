#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


//---------------------- Solution Starts Here ----------------------

// The test has a total of N
//  question, each question carries 3
//  marks for a correct answer and −1
//  for an incorrect answer. Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got X
//  questions correct and the rest of them incorrect. For Chef to pass the course he must score at least P
//  marks.
void solve(){
	int n, x, p; 
	cin >> n >> x >> p;

	int marksobtained = x*3-(n-x);

	(marksobtained >= p) ? cout << "PASS" << endl : cout << "FAIL" << endl;

}
	
//---------------------- Solution Ends Here ----------------------
int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}



