#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// THIS CAN BE SOLUTION ALSO :  
// int main()
// {
//     size_t n;
//     cin >> n;
//     string s;
//     cin >> s;
//     s.erase(unique(s.begin(), s.end()), s.end());
//     cout << n - s.length() << endl;
//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
        if (str[i] == str[i + 1])
            count++;
    cout << count;
    return 0;
}