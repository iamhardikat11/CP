//Link:-https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int  n;
    cin>>n;
    int sum=0;
    int i=5;
    while(n!=0)
    {
        sum+=n/5;
        i=i*5;
        n=n/5;
    }
    cout<<sum<<endl;
    return 0;
}
