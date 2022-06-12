#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        vector<int> f(n);
        for(int i=0;i<n;i++) cin >> s[i];
        for(int i = 0; i < n; i++) cin >> f[i];
        cout << f[0]-s[0] << " ";
        for(int i=1;i<n;i++)
        {
            if(f[i-1]<=s[i]) cout << f[i]-s[i] << " ";
            else    cout << f[i]-f[i-1] << " ";
        }
        cout << endl;
    }
    return 0;
}