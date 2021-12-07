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



void solve(vector<int> v,int N)
{
     int freq[N];
     for(int i=0;i<N;i++)
      freq[i] = 0;
     for(int i=0;i<N;i++)
      freq[v[i]-1]++;  
     int A,B;
     for(int i=0;i<N;i++)
     {
          if(freq[i]==2)
           A = i+1;
          if(freq[i]==0)
           B = i+1;
     }
     printf("%d %d\n",A,B);
     return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        int N;
        scanf("%d",&N);
        vector<int> v;
        for(int i=0;i<N;i++)
        {
             int a;
             scanf("%d",&a);
             v.push_back(a);
        }
        sort(all(v));
        solve(v,N);
    }
}
