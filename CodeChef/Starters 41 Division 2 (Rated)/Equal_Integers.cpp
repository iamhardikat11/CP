#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X,Y;
        cin >> X >> Y;
        if(X==Y) cout << 0 << endl;
        else if(X>Y) 
        {
            if((X-Y)%2==0) cout << (X-Y)/2 << endl;
            else cout << (X-Y+1)/2+1 << endl;
        }
        else
        {
            cout << Y-X << endl;
        }
    }
    return 0;
}