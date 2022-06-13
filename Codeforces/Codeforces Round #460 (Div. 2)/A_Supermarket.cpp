#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    double mn = INT_MAX;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        mn = min(mn,((double)(m*x))/y);
    }
    printf("%.8f\n", mn);
    return 0;
}