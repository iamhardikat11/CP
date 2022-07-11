#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, ans = 0;
    cin >> n;
    vector <int> a(n);
    for (auto &x : a)
        cin >> x;
    cin >> m;
    vector <int> b(m);
    for (auto &x : b)
        cin >> x;
    map<int, set<int>> mp;
    for (int i = 0; i < m; i++)
        mp[b[i]].insert(i);
    
    int final = INT_MAX;
    for(auto &x : mp[a[0]])
    {
        int last = (x);
        for (int i = 1; i < n; i++)
        {
            int mn = INT_MAX;
            for(auto it = mp[a[i]].begin(); it != mp[a[i]].end(); ++it)
            {
            if(abs((*it)-last)<mn)
            {
                mn = abs((*it)-last);
                last = *it;
            }
        }
        ans += mn;
    }
    final = min(final,ans);
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    for(int x=1;x<=t;x++)
    {
        cout << "Case #" << x << ": "; 
        solve();
    }
    return 0;
}