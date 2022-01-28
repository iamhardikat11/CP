#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> lucas;
void solve()
{
    lucas.push_back(2);
    lucas.push_back(1);
    int i = 1;
    while(i<=86)
    {
        ll a = lucas[i]+lucas[i-1];
        i++;
        lucas.push_back(a);
    }
}
int main()
{
    solve();
    int N;
    cin >> N;
    cout << lucas[N] << endl;
    return 0;
}
