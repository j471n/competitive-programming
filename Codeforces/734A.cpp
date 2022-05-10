// Date : 28-Sep-2020 By Jatin Sharma

#include<iostream>
#include<string>
using namespace std;

int main(){
    int games, anton = 0 , danik = 0;
    string win;
    cin >> games;
    cin >> win;
    for (int i = 0; i < win.size(); i++)
    {
        if (win[i] == 'A'){
            anton++;
        }
        else if (win[i] == 'D')
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton";
    } else if (anton < danik)
    {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;

}