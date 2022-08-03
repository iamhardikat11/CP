#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for(int i=0; i < a.length(); i++)
    {
        if(a[i]>='5') {
            if(i==0 && a[i]=='9') continue;
            a[i] = ('9'-a[i])+'0';
        }
    }
    cout << a << endl;
    return 0;
}