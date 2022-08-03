#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int r = 0;
    while(t--)
    {
        string a;
        cin >> a;
        if(a=="++X") ++r;
        else if(a=="X++") r++;
        else if(a=="--X") --r;
        else r--;
    }
    cout << r << endl;
    return 0;
}