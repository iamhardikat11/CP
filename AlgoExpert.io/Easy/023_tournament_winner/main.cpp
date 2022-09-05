#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<pair<string,string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    vector<int> result(n);
    map<string,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> result[i];
        if(result[i])
            mp[v[i].first] += 3;
        else
        {
            mp[v[i].second] += 3;
        }
    }
    auto it = mp.rbegin();
    cout << it->first << endl;
    return 0;
}