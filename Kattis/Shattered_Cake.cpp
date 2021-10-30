//Link:-https://open.kattis.com/problems/shatteredcake
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int W,n;
    cin>>W>>n;
    int sum=0;
    while(n--)
    {
        int w,l;
        cin>>w>>l;
        sum+=w*l;
    }
    cout<<sum/W<<endl;
   return 0; 
}
