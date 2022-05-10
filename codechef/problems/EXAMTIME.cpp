#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//---------------------- Solution Starts Here ----------------------

void solve()
{
  int d_dsa, d_toc, d_dm, s_dsa, s_toc, s_dm;
  cin >> d_dsa >> d_toc >> d_dm;
  cin >> s_dsa >> s_toc >> s_dm;

  int d_total = d_dsa + d_toc + d_dm;
  int s_total = s_dsa + s_toc + s_dm;

  // >---------- PSEUDO CODE ----------
  // if d_total > s_total
  // 	print dragon
  // else if d_total < s_total
  // 	print sloth
  // else
  // 	if d_dsa > s_dsa
  // 		print dragon
  // 	else if d_dsa < s_dsa
  // 		print sloth
  // 	else
  // 		if d_toc > s_toc
  // 			print dragon
  // 		else if d_toc < s_toc
  // 			print sloth
  // 		else
  // 			if d_dm > s_dm
  // 				print dragon
  // 			else if d_dm < s_dm
  // 				print sloth
  // 			else
  // 				print TIE

  (d_total > s_total) ? cout << "DRAGON" << endl : (d_total < s_total) ? cout << "SLOTH" << endl
                                               : (d_dsa > s_dsa)       ? cout << "DRAGON" << endl
                                               : (d_dsa < s_dsa)       ? cout << "SLOTH" << endl
                                               : (d_toc > s_toc)       ? cout << "DRAGON" << endl
                                               : (d_toc < s_toc)       ? cout << "SLOTH" << endl
                                               : (d_dm > s_dm)         ? cout << "DRAGON" << endl
                                               : (d_dm < s_dm)         ? cout << "SLOTH" << endl
                                                                       : cout << "TIE" << endl;
}

//---------------------- Solution Ends Here ----------------------
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
