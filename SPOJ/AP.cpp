#include <bits/stdc++.h> 
using namespace std;
#define ll long long
void solve(){
    ll s3,sn3,sum;
    cin >> s3 >> sn3 >> sum;
    // s3 = a+2d
    // sn3 = a+(n-3)d // 
    // sum = n/2*(2*a+(n-1)*d)
    // n = 2*sum/(s3+sn3)
    ll n = (2*sum)/(s3+sn3);
    cout << n << endl;
    // (sn3-s3)/(n-5) = d
    // a = s3 - 2*d
    ll d = (sn3-s3)/(n-5);
    ll a = s3 - 2*d;
    for(ll i=0;i<n;i++){
        cout << a+i*d << " ";
    }
    cout << endl;
}

int main()
{
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}