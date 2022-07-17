
#include <bits/stdc++.h> 

using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    vector<int> h(26,0);
    for(int i=0;i<26;i++)
    {
        char ch = 'a'+i;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') continue;
        else h[i] = 1;
    }
    for(int i=0;i<n-3;i++)
    {
        if(h[(int)a[i]-97]==1 && h[(int)a[i+1]-97]==1 && h[(int)a[i+2]-97]==1 && h[(int)a[i+3]-97]==1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}