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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int t;
    cin >> t;
    for(int i=1; i <= t; i++)
    {
        string a;
        cin >> a;
        vector<int> hash(26,0);
        int vowel = 0;
        char max_vowel = 'A';
        int mx_vowel = hash[0];
        int mx_con = hash[1];
        char max_con = 'B';
        for(int i=0;i<a.size();i++)
        {
            hash[a[i]-65]++;
            if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
            {
                    vowel++;
                    if(hash[a[i]-65]>mx_vowel)
                    {
                        mx_vowel = hash[a[i]-65];
                        max_vowel = a[i];
                    }
            }
            else
            {
                if(hash[a[i]-65]>mx_con)
                {
                    mx_con = hash[a[i]-65];
                    max_con = a[i];
                }
            }
        }
        cout << "Case #" << i << ": " << min(2*(vowel-mx_vowel)+(a.size()-vowel),(vowel)+2*(a.size()-vowel-mx_con)) << endl;  
    } 
    return 0;
}