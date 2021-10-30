//Link:-https://open.kattis.com/problems/romans
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float N;
    cin>>N;
    int ans=N*((1000.0*5280.0)/4854.0)+0.5;
    cout<<ans<<endl;
    return 0;
}
