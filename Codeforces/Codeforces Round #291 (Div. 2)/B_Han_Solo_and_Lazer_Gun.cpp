#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin >>n>>x>>y;
    map<pair<int,int>,int> m;
    while(n--)
    {
        int a,b;
        cin >>a>>b;
        a = (a-x);
        b = (b-y);
        int r = gcd(a,b);
        a = a/r;
        b = b/r;
        if(a<0 && b<0) {
            a = -a;
            b = -b;
        }
        else if(a<0 && b==0) {
            a = -a;
        }
        else if(a==0) {
            b = abs(b);
        }
        else if(b<0 && a>0) {
            b = abs(b);
            a = -a;
        }
        m[make_pair(a,b)]++;
    }
    cout << m.size() << endl;
    return 0;
}