//This problem was asked by Uber.

/*Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
*/
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


ll prod(vector<int> v,int N)
{
     ll result = 1;
     for(int i=0;i<N;i++)
      result*=v[i];
     return result;
}
void solve(vector<int> v,int N) {
     vector<ll> result;
     ll p = prod(v,N);
     for(int i=0;i<N;i++)
          result.push_back(ll/v[i]);
     printf("The Modified Array is as Below:\n");
     for(int i=0;i<N;i++)
      printf("%lld ",v[i]);
     return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc); //Number of Test Cases
    for (int t = 1; t <= tc; t++) {
        printf("Case #",t,": \n"); 
        printf("Please Enter the Number of Elements in the Array:\n");
        int N;
        scanf("%d",&N);
        printf("Please Enter the Elements of the Array:\n");
        vector<int> v;
        for(int i=0;i<N;i++)
        {
             int a;
             scanf("%d",&a);
             v.push_back(a);
        }
        solve(v,N);
    }
}
