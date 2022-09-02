#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<ll, ll>, set<ll, ll>> graph;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<int> v(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (i >= 1 && v[i - 1][j])
                graph[{i, j}].insert({i - 1, j});
            if (j >= 1 && v[i][j - 1])
                graph[{i, j}].insert({i, j - 1});
            if (i <= n - 2 && v[i + 1][j])
                graph[{i, j}].insert({i + 1, j});
            if (j <= n - 2 && v[i][j + 1])
                graph[{i, j}].insert({i, j + 1});
        }
    }
    map<pair<ll, ll>, ll> mp;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[{i, j}].size() == 0)
            {
                ans.push_back(1);
                mp[{i, j}] = 1;
            }
            else
            {
                for (auto it : graph[{i, j}])
                {
                    if (mp.find({it.first, it.second}) == mp.end())
                    {
                        
                    }
                }
            }
        }
    }
    return 0;
}
