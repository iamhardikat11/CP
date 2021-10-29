//Link:-https://open.kattis.com/problems/sumsquareddigits
#include <bits/stdc++.h>
using namespace std;
int SSD(int b, int n)
{
     int sum=0;
     while(n!=0)
     {
          int r=n%b;
          sum+=r*r;
          n=n/b;
     }
     return sum;
}
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
      int i,b,n;
      cin>>i>>b>>n;
      cout<<i<<" "<<SSD(b,n)<<"\n";
     }
     return 0;
}
