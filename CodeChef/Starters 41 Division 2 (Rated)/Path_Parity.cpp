#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin  >> tc;
    while ( tc-- )
    {
        int n,k;
        cin >> n >> k;
        if(n==1)
        {
            if(k) cout << "Yes" << endl;
            else cout << "No" << endl;
        } 
        else if(n%2)
        {
            //odd
            cout << "Yes" << endl;
        }
        else
        {
            
        }
    }
}