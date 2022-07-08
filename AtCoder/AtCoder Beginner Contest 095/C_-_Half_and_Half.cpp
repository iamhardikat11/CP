#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;
    int mn = INT_MAX;
    for(int i=0;i<=pow(10,5);i++)
    {
        mn = min(mn,2*C*i+max(0,X-i)*A+max(0,Y-i)*B);
    }
    cout << mn << endl;
    return 0;
}