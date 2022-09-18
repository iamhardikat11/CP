#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll findShifts(vector<ll> A, ll N)
{
    vector<ll> shift(N,0);
    for (ll i = 0; i < N; i++)
    {
        if (i == A[i] - 1)
            shift[i] = 0;
        else
            shift[i] = (A[i] - 1 - i + N) % N;
    }
    ll sum = 0;
    for(ll i = 0; i < N; i++)
        sum += shift[i];
    return sum;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    for(int it = 1; it <= t; it++)
    {
        cout << "Case #" << it << ": ";
        ll n,k;
        cin >> n >> k;
        vector<ll> arr1(n),arr2(n);
        for(ll i=0;i<n;i++)
            cin >> arr1[i] >> arr2[i];
        if(findShifts(arr1, n)-findShifts(arr2, n)<=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
