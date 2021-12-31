#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
int main()
{
    int tc;
    cin >> tc;
    while ( tc-- )
    {
        int n;
        cin >> n;
        int count = 0;
        int i=1;
        while(i*i<=n)
        {
            count++;
            i++;
        }
        i=2;
        while(i*i*i<=n)
        {
            long long s = sqrt(i*i*i);
            if(!(s*s == i*i*i))
            count++;
            i++;
        }
        cout << count << endl;
    }
}
