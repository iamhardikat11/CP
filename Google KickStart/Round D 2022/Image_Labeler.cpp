#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    long double ans = 0.0;
    for (int i = 0; i < m - 1; i++)
        ans += a[i];
    int j = m - 1;
    while (j < n)
    {
        v.push_back(a[j]);
        ++j;
    }
    int k = v.size();
    if (v.size() % 2)
        ans += v[k / 2];
    else
        ans += ((double)(v[k / 2] + (double)v[k / 2 - 1]) / 2);
    cout << fixed << setprecision(10) << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}