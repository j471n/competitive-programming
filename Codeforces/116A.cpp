#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 0, passMax = 0;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        t -= a;
        t += b;
 
        if (t > passMax)
        {
            passMax = t;
        }
    }
    cout << passMax;
    return 0;
}