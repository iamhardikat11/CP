#include <bits/stdc++.h>
using namespace std;
bool cmp1(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}
bool cmp2(pair<int,int> a, pair<int,int> b)
{
    return a.first > b.first;
}
int main()
{
    int n,m;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(auto &x: v) cin >> x.first >> x.second;
    sort(v.begin(),v.end(),cmp1);
    cin >> m;
    vector<pair<int,int>> y(m);
    for(auto &x: y) cin >> x.first >> x.second;
    sort(y.begin(),y.end(),cmp2);
    cout << max(y[0].first-v[0].second,0) << endl;
    return 0;
}