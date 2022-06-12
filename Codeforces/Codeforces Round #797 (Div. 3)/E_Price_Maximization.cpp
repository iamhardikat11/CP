#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int cost = 0;
        for(int i= 0; i < n; i+=2)
        {
            cost+=(int)(floor((a[i+1] + a[i])/(double)k));
        }
        cout << cost << endl;
    }
    return 0;
}