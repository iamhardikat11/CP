#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s,t;
    cin >> s >> t;
    vector<pair<char,int>> c1,c2;
    int i;
    for(i=0;i<s.size()-1;i++)
    {
        int cnt = 1;
        char ch = s[i];
        while(s[i]==s[i+1]) {
            cnt++;
            i++;
        }
        c1.push_back(make_pair(ch,cnt));
    }
    if(i==s.size()-1) c1.push_back(make_pair(s[s.size()-1],1));
    for(i=0;i<t.size()-1;i++)
    {
        int cnt = 1;
        char ch = t[i];
        while(t[i]==t[i+1]) {
            cnt++;
            i++;
        }
        c2.push_back(make_pair(ch,cnt));
    }
    if(i==t.size()-1) c2.push_back(make_pair(t[t.size()-1],1));
    string p = "Yes";
    
    if(c1.size()==c2.size())
    {
        for(int i=0;i<c1.size();i++)
        {
            if(c1[i].first == c2[i].first){
                if(c1[i].second>c2[i].second) {
                    p = "No";
                    // cout << 1 << endl;
                    break;
                }
                if(c2[i].second>=2 && c1[i].second==1){
                    p = "No";
                    // cout << 2 << endl;
                    break;
                }
            }
            else{
                p = "No";
                break;
            }
        }
    }
    else p = "No";
    cout << p << endl;
    return 0;
}