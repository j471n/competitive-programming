// Date : 30 - Sep - 2020 By Jatin Sharma

#include <iostream>


using namespace std;

int main()
{
    int i;
    string a, b;
    cin >> a;
    cin >> b;

    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && b[i] == '0')
        {
            a[i] = '0';
        }
        else if (a[i] == '0' && b[i] == '1')
        {
            a[i] = '1';
        }
        else if (a[i] == '1' && b[i] == '0')
        {
            a[i] = '1';
        }
        else if (a[i] == '1' && b[i] == '1')
        {
            a[i] = '0';
        }
    }
    cout << a;
    return 0;
}