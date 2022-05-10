// Date : 28 - Sep - 2020 By Jatin Sharma

#include<iostream>
using namespace std;
int main(){
    int n, h, width = 0;
    cin >> n >> h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= h)
        {
            width++;
        }
        if (a[i] > h)
        {
            width +=2;
        }
    }
    
    cout << width;
    return 0;

}