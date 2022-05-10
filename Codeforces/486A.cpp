// Date : 30 - Sep - 2020 By Jatin Sharma

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, ans;
    cin >> n;
    if (n % 2 == 0)
    {
        ans = n / 2;
    }
    if (n % 2 == 1)
    {
        ans = (n - 1) / 2 - n;
    }
    cout << ans;
    return 0;
}