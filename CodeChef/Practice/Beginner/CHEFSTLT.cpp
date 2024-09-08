#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve(string s1,string s2) {
     int diss = 0;
     for(int i=0;i<s1.length();i++)
     {
       if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i])
        diss++;
     }
     cout << diss << " ";
     int count =0;
     for(int i=0;i<s1.length();i++)
     {
       if(s1[i]==s2[i] && s1[i]=='?')
        count++;
       else if(s1[i]=='?' && s2[i]!='?')
        count++;
       else if(s1[i]!='?' && s2[i]=='?')
       count++;
     }
     cout << count+diss <<endl;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
     //    printf("Case #",t,": "); 
     string s1,s2;
     cin >> s1 >> s2;
     solve(s1,s2);
    }
}
