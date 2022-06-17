#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n,0);
        int sum=0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]) b[i] = 1;
            sum++;
        }
        if(sum==x) cout << 0 << endl;
        else if(sum < x) cout << -1 << endl;
        else
        {
            int o=0;
            int i=0;
            int j=n-1;

            while(sum > x)
            {
                if(a[i]) {
                    sum--;
                    i++;
                }
                else if(a[j]){
                    sum--;
                    j++;
                }
                
            }
        }
    }
}