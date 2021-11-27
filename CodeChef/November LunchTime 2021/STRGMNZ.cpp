#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()


int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
       ll n;
       cin >> n;
       int a;
       ll rt = sqrt(n);
       for(a = 2; a<=rt; a++)
       {
            if(n%a==0)
             break;
       }
       ll x;
       if(a==rt+1)
         x = n+1;
       else
        x = n+n/a;
       cout << x <<endl;
    }
    return 0;
 }
