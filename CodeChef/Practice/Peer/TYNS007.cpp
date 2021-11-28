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

void input(int arr[])
{
     for(int i=0;i<4;i++)
      scanf("%d",&arr[i]);
}
void isComposite(int count)
{
     if(count ==0 || count==1)
      printf("Access Denied\n");
     else
     {
          for(int i=2;i<=(int)sqrt(count);i++)
          {
               if(count%i==0)
               {
                    printf("Access Granted\n");
                    return;
               }
          }
          printf("Access Denied\n");
     }
     
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) {
        int arr[4];
        int arr1[4];
        input(arr);
        input(arr1);
        int count = arr[0]%arr1[0] + arr[1]%arr1[1] + arr[2]%arr1[2] + arr[3]%arr1[3];
        isComposite(count);
        
    }
}