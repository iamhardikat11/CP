#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int M = N;
    int c = 0;
    while(N!=0)
    {
        c+=N%10;
        N = N/10;
    }
    if(M%c==0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
