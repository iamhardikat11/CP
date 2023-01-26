
#include <bits/stdc++.h> 
void solve(){
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {   
        cin >> v[i];
    }
    int x1 = 0;
    int x2 = 1;
    for(int ch: v)
    {
        if(ch == x2)
        {
            x2+=1;
            x1+=1;
        }
    }
    int s = n-a;
    if(s%k==0) cout << s/k << endl;
    else cout << s/k+1 << endl;
}

int main()
{
 int t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}