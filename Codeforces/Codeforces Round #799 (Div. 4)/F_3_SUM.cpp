#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int> v(n);
        vector<int> a(10,0);
        for(int i=0;i<n;i++) {
            cin >> v[i];
            if((v[i]%10)<=3)
                a[v[i]%10]++;
        }
        if((a[1]>=3) || (a[0]>=1 && a[1]>=1 && a[2]>=1) || (a[3]>=1 && a[0]>=2) || ) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}