#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        if(x%3==0 || y%3==0) cout << 0 << endl;
        else if(x==y) cout << 1 << endl;
        else
        {
            if((x%3)==(y%3))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}