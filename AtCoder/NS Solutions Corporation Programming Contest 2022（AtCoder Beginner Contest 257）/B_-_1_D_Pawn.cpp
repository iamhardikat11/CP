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
    int N,K,Q;
    cin >> N >> K >> Q;
    vector<int> A(K);
    map<int,int> m;
    for(int i=1;i<=N;i++) m[i] = 0;
    forn(i,K) {
        cin >> A[i];
        m[A[i]]=1;
    }
    int p = A[A.size()-1];
    vector<int> L(Q);
    forn(i,Q) {
        cin >> L[i];
        if(A[L[i]-1]!=N)
        {
            if(m[A[L[i]-1]+1]==0)
            {
                m[A[L[i]-1]]=0;
                int k = A[L[i]-1];
                A.erase(A.begin()+L[i]-1);
                A.insert(A.begin()+L[i]-1,k+1);
                m[A[L[i]-1]] = 1;
            }
        }
    }
    for(auto it=m.begin(); it!=m.end(); ++it)
    {
        if((*it).second)
         cout << (*it).first << " ";
    }
    cout << endl;
    return 0;
}