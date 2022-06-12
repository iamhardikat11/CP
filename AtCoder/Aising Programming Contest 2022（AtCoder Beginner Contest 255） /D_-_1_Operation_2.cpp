#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++)
        cin >> A[i];
    sort(A.begin(), A.end());
    vector<ll> sum;
    ll s = 0;
    for (ll i = 0; i < N; i++)
    {
        s += A[i];
        sum.push_back(s);
    }
    while (Q--)
    {
        ll x;
        cin >> x;
        ll l = 0;
        ll r = N - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;

            // Check if x is present at mid
            if (A[m] == x)
            {
                l = m;
                r = m;
                break;
            }
            // If x greater, ignore left half
            if (A[m] < x)
                l = m + 1;
            // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // cout << r << " " << l  << endl;
        if(r==-1)
           cout << sum[N-1]-N*x << endl; 
        else if(l==N)
            cout << N*x-sum[N-1] << endl;
        else if(l==r)
            cout << (2*r+2-N)*x+sum[N-1]-2*sum[r] << endl; 
        else
            cout << (l+r+1-N)*x+sum[N-1]-sum[r]-sum[l-1] << endl;

    }
    return 0;
}

