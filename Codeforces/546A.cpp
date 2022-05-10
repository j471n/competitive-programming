#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    int result =0;
    cin >> k >> n >> w;

    for (int i = 1; i < w+1; i++)
    {
        result += k*i;
    }
    if (result > n ){
        cout << result -n << endl;
    }  
    else {
        cout << 0 << endl;
    }

    return 0;
}