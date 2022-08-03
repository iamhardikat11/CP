#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum+=v[i];
    }
    if(sum<m)
        cout << -1 << endl;
    else 
    {
        sort(v.begin(), v.end());
        
    }


}