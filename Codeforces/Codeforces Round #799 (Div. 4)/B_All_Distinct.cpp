#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> a;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            a[v[i]]++;
        }
        int cnt=0;
        for(auto it = a.begin();it != a.end(); it++)
        {
            cnt++;
        }
        cout << n-2*(int)ceil(((n-cnt)/2.0)) << endl;
    }
    return 0;
}