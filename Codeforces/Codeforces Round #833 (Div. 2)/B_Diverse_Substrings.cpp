#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    vector<map<int,int>> mp(s.size());
    set<int> st;
    vector<int> dist;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
        dist.push_back(st.size());
        if(i==0)
        	mp[i][s[i]]++;
        else
        {
            mp[i] = mp[i-1];
            mp[i][s[i]]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> cnt(10);
        int diff = 0;
        for (int j = i; j < min(i + 228, n); j++)
        {
            if (cnt[s[j] - '0'] == 0)
                diff++;
            st.insert(s[j]);
            cnt[s[j] - '0']++;   
            if (*max_element(all(cnt)) <= diff)
                ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}