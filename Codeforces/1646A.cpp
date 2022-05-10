#include <bits/stdc++.h>
#define ll long long
#define fr(a,b) for(int i = a;i < b; i++)
using namespace std;
int main (){
	int t; cin >> t;
	ll n,s;
	fr(0,t){
		cin >> n >> s;
		cout << s / (n * n) << endl;
	}
}