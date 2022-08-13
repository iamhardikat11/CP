#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N;
    cin >> N;
    vector<ll> a(N),b(N);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;
    string fastest;
    cin >> fastest;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(fastest.compare("true")==0)
    {
        ll max_sum = 0;
        for(ll i=0; i<N;i++)
            max_sum += max(a[i],b[N-1-i]);
        cout << max_sum << endl;
    }
    else
    {
        ll min_sum = 0;
        for(ll i=0; i<N;i++)
            min_sum += min(a[i],b[N-1-i]);
        cout << min_sum << endl;
    }
    return 0;
}