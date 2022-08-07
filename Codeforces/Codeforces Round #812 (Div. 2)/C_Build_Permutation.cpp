#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> store;
void perfectSquares(float l, float r)
{
    ll number = ceil(sqrt(l));
    ll n2 = number * number;
    number = (number * 2) + 1;
    while ((n2 >= l && n2 <= r))
    {
        store.push_back(n2);
        n2 = n2 + number;
        number += 2;
    }
}
int main()
{
    ll tc;
    cin >> tc;
    perfectSquares(0, 1e5);
    vector<ll> a(100002,0);
    while (tc--)
    {
        ll n,m,k,l;
        cin >> n;
        for(ll m = n; m!=0 ; m=l)
        {
            k = sqrt(2*m-2);
            l = pow(k,2)-m+1;
            for(ll i=m-1;i>=l;i--)
            {
                a[i] = pow(k,2)-i;
            }
        }
        for(ll i=0;i<n;i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
