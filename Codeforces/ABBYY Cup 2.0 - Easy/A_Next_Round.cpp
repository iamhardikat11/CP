#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int r = v[k-1];
    if(r==0)
    {
        while(k>=0 && !(v[k]>0))
        {
            k--;
        }
        cout << k+1 << endl;
        return 0;
    }
    int i = k-1;
    while(v[i]==r)
    {
        i++;
    }
    cout << i << endl;
    return 0;
}