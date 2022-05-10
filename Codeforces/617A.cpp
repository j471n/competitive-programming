#include<iostream>
using namespace std;

int main(){
    int cor;
    cin >> cor;
    int steps = 0;

    while (cor !=0)
    {   
        if (cor >= 5)
        {
            cor -=5;
            steps++;
        }
        else if (cor >= 4)
        {
            cor -= 4;
            steps++;
        }
        else if (cor >= 3)
        {
            cor -= 3;
            steps++;
        }
        else if (cor >= 2)
        {
            cor -= 2;
            steps++;
        }
        else if (cor >= 1)
        {
            cor -= 1;
            steps++;
        }
    }
    cout << steps;
    return 0;
    
}