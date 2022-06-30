#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 6
int main()
{
    map<ll,ll> a;
    ll x=0;
    for(int i=0; i<6; i++)
    {
        cin >> x;
        a[x++];
    }
    for(auto it = a.begin(); it != a.end(); it++)
    {
        for(int i=0;i<(*it).second; i++)
        {
            cout << (*it).first << " ";
        }
    }
    cout << endl;
    return 0;
}