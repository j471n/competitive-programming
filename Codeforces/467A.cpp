// Date : 28 - Sep - 2020 By Jatin Sharma

#include<iostream>
using namespace std;

int main(){
    int rooms; cin >> rooms;
    int p, q;
    int count = 0;

    for (int i = 0; i < rooms; i++)
    {
        cin >> p >> q;
        if (q-p >=2)
        {
            count++;
        }
    }

    cout << count;
    return 0;
    
}