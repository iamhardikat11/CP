#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int cnt=0;
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size(); j++)
        {
            if(v[j]-v[i] <= d) cnt++; 
        }
    }
    cout << cnt << endl;
    return 0;
}