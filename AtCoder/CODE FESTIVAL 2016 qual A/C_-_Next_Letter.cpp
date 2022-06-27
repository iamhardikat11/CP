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
    string a;
    cin >> a;
    int K;
    cin >> K;
    // greedy approach to the problem 
    // in it what we will do is check for each character to minimise it.
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='a') continue;
        int op = 'z'-a[i]+1;
        if(K>=op) {
            K-=op;
            a[i] = 'a';
        }
    }
    // Important miss:-
    K = K%26;
    int i = a.size()-1;
    while(K)
    {
        if(a[i]=='z') {
            a[i] = 'a';
            i--;
            K--;
            continue;
        }
        a[i] = (char)(a[i]+1);
        K--;
    }
    cout << a << endl;
    return 0;
}