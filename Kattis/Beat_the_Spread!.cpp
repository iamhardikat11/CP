#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s,d;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> s >> d;
        if(s >= d && (s+d)%2==0)
        {
            cout << (s+d)/2 << " " << (s-d)/2 << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
}
