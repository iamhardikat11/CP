#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b;
    cin >> n >> m >> a >> b;
    long long k = n%m;
    cout << min(abs(k*b),abs((m-k)*a)) << endl; 
    return 0;
}