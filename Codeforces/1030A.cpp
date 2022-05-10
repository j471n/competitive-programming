// Date : 30-Sep-2020 By Jatin Sharma

#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int level;
    
    for (int i = 0; i < n; i++)
    {
        cin >> level;
        if (level == 1){
            cout << "HARD";
            return 0;
        }

    }
    cout << "EASY";
    return 0; 
    
}