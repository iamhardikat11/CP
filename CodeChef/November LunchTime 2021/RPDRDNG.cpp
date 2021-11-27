#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <vector>
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    while(tc--)
    {
       int N;
       scanf("%d",&N);
       vector<int> v(2*N);
       for(int &i:v) scanf("%d",&i);
       if(N==1)
       {
            if(v[0]==v[1])
             cout << v[0] <<endl;
            else
             cout << "-1" <<endl;
            continue;
       }
       map<int, int> f;
       for(ll i:v)
        f[i]++;
       vector<int> unique;
       for(auto pii: f)
        unique.push_back(pii.first);
       sort(all(unique));
       bool ans = true;
       if(unique.size()!=N)
        ans = false;
       int mid = (N%2==0) ? N/2-1 : N/2;
       if((ans && f[unique[mid]]!=3) || (ans && f[unique[N-1]]!=1))
        ans = false;
       for(int i=0;(i<N-1 && ans);i++)
       {
            if(i!=mid && f[unique[i]]!=2)
            {
                 ans = false;
            }
       }
       if(ans)
       {
         for(int i:unique)
          cout << i << " ";
         cout <<endl;
       }
       else
       {
            cout << "-1" <<endl;
       }
    }
   }
