#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fib(ll N)
{
    vector<ll> f(N+1,0);
    f[0] = 0;
    f[1] = 1;
    for(ll i=2;i<N;i++)
        f[i] = f[i-1] + f[i-2];
    cout << f[N-1] << " // ";
    for(ll i=0;i<N;i++)
    {
        if(i==N-1) cout << f[i] << endl;
        else
        {
            cout << f[i] << ", ";
        }
    } 
    return;
}
int main()
{
    ll N;
    cin >> N;
    fib(N);
    return 0;
}