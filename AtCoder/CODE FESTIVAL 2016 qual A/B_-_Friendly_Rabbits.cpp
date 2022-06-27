#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> a;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(i+1<v[i])
            a[i+1] = v[i];
    }
    int cnt=0;
    for(auto it= a.begin(); it != a.end(); it++)
    {
        int x = (*it).first;
        int y = (*it).second;
        if(v[y-1]==x) cnt++;
    }
    cout << cnt << endl;
    return 0;
}