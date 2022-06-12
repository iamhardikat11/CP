#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,X;
    cin >> A >> B >> X;
    if(X>=A && (X-A)<=B)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}