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


int position(int arr[],int N,int n)
{
    for(int i=0;i<N;i++)
    if(arr[i]==n)
     return i+1;
}
void solve(int arr[],int N) {
  int a[N];
  for(int i=0;i<N;i++)
     a[i] = position(arr,N,i+1);  
  for(int i=0;i<N;i++)
  {
       if(a[i]!=arr[i])
       {
            cout << "not ambiguous" <<endl;;
            return;
       }
  }
  cout << "ambiguous" <<endl;
  
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    
    while(tc!=0){
        // cout << "Case #" << t << ": ";
        int arr[tc];
        for(int i=0;i<tc;i++)
         cin >> arr[i];
        solve(arr,tc);
        cin >> tc;
    }
}
