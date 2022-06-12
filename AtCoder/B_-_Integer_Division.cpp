#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    string a;
    cin >> a;
    int n = a.length();
    if(a[0]=='-')
    {
        string x = a.substr(1,n-1);

        cout << x.substr(0,n-2) << y << endl;

    }
    else
    {
        if(a[n-1] )
        cout << a.substr(0,n-1) << endl;
    }
}