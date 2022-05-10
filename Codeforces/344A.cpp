// Date : 30 - Sep - 2020 By Jatin Sharma

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string last_magnet = "00", a;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a != last_magnet)
        {
            count++;
            last_magnet = a;
        }
    }
    cout << count;
    return 0;
}