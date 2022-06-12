#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int h1=3,h2=2,h3=1;
        n = n-6;
        h1+=n/3;
        h2+=n/3;
        h3+=n/3;
        int k = n%3;
        if(k==0)
            cout << h2 << " " << h1 << " " << h3 << endl;
        else if(k==1) 
            cout << h2 << " " << h1+1 << " " << h3 << endl;
        else
            cout << h2+1 << " " << h1+1 << " " << h3 << endl;
    }
    return 0;
}