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
long double distance(pair<int,int> A,pair<int,int> B)
{
    return (long double)sqrt(pow((double)(A.first-B.first),2) + pow(A.second-B.second,2));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,K;
    cin >> N >> K;
    vector<int> A(K);
    for(int i = 0; i < K; i++) cin >> A[i];
    vector<pair<int,int> > B(N);
    for(int i = 0; i < N; i++)
        cin >> B[i].first >> B[i].second;
    set<long double> S;
    for(int i = 0; i < N; i++)
    {
        double mn = INT_MAX;
        for(int j=0;j<K;j++)
        {
            double s = distance(B[A[j]-1],B[i]);
            if(s < mn) mn = s;
        }
        S.insert(mn);
    }
    auto it = S.end();
    it--;
    printf("%.6Lf ",*it);
    return 0;
}