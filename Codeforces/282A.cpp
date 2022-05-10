#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string opt;
        cin >> opt;
        if (opt == "++X" || opt == "X++")
        {
            count++;
        }
        else if (opt == "--X" || opt == "X--"){
            count--;
        }
    }
    cout << count;
    
    return 0;
}