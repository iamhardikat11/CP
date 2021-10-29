//Link:-https://open.kattis.com/problems/filip
#include <bits/stdc++.h>
using namespace std;
int reverse(int N)
{
     int rev=0;
     while(N!=0)
     {
          int r=N%10;
          rev=rev*10+r;
          N=N/10;
     }
     return rev;
}
int main()
{
     int a,b;
     cin>>a>>b;
     a=reverse(a);
     b=reverse(b);
     cout<<(a>b?a:b)<<"\n";
     return 0;
}
