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
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    vector<int> arr(2,0);
    vector<int> s1,s2,t1,t2; 
    for(int i=0;i<n;i++)
    {
        arr[s[i]-97]++;
        if(s[i]=='a') s1.push_back(i);
        else s2.push_back(i);
        if(t[i]=='a') t1.push_back(i);
        else t2.push_back(i);   
        arr[t[i]-97]++;
    }
    if(arr[0]&1 || arr[1]&1) cout << -1 << endl;
    else
    {
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                cnt++;
            }
        }
        if(n%2==0)
        {
            cout << 
        }
        else
        {

        }
    }
    return 0;
}