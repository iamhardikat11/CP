#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x: a) cin >> x;
    sort(a.begin(), a.end(), greater<int> ());
    if(k>n) cout << -1 << endl;
    else 
    {
        cout << a[k-1] << " " << a[k-1] << endl;
    }
    return 0;
}