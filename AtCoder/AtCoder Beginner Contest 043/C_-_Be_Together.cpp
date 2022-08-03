#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum=0;
    map<int,int> m;
    int cnt = 0;
    for(auto &x: arr) {
        cin >> x;
        m[x]++;
        if(m[x]==1)
        {
            sum+=x;
            cnt++;
        }
    }
    cout << sum << " " << cnt << endl;
    if(sum%cnt==0)
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=pow(arr[i]-(sum/n),2);
        }
        cout << ans << endl;
        return 0;
    }
    int target=ceil(sum/n);
    int ans = -1;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i] - target) < mn)
        {
            mn = abs(arr[i] - target);
            ans = i;
        }
    }
    target = arr[ans];
    int s = 0;
    for(int i=0;i<n;i++)
    {
        s+=pow(arr[i]-target,2);
    }
    cout << s << endl;
    return 0;
}