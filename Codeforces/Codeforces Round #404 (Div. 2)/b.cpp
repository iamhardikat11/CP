#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    // for(auto &x: v)
    // {
    //     cout << x.first << " " << x.second << "\n";
    // }
    int cnt = 0;
    for(int i=0;i<n;i++) {
        while(i < n && v[i+1].first <= v[i].second) {
            
            i++;
        }
        cnt++;
    }
    return 0;
} 