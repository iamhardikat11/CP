#include <bits/stdc++.h>
using namespace std;
int f(int t)
{
     return t*t+2*t+3;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin >> t;
     cout << f(f(f(t)+t)+f(f(t))) << endl; 
     return 0;
}
