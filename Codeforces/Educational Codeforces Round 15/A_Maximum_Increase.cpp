#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int mx = 1;
    int curr = 1;
    for(int i=1;i<n;i++)
    {
        if(v[i]>v[i-1]) curr++;
        else
        {
            mx = max(mx,curr);
            curr=1;
        }
    }
    mx = max(mx,curr);
    cout << mx << endl;
    return 0;
}