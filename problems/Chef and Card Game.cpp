#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

// to get the sum of numbers
int getSum(int num){
    int sum = 0;
    while (num != 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}


void solve(){
	int n, a, b, a_sum, b_sum; 
	cin >> n;

	int playerScores[] = {0,0};

	while(n--){
		cin >> a >> b;

		a_sum = getSum(a);
		b_sum = getSum(b);

		if (a_sum > b_sum) playerScores[0]++;
		else if(a_sum < b_sum) playerScores[1]++;
		else { playerScores[0]++; playerScores[1]++;}

	}

	// 0 when player[0] wins, 1 when player[1] wins, if game draw then return 2 
	int whoWon = (playerScores[0] > playerScores[1]) ? 0 : (playerScores[0] < playerScores[1]) ? 1 : 2;  

	// print whoWon and if there is draw then print anyone's score otherwise print won player score
	cout << whoWon << " " << ((whoWon == 2) ? playerScores[0] : playerScores[whoWon])  << endl;	
}
	
	
//---------------------- Solution Ends Here ----------------------
int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}