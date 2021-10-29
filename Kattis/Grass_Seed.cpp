//Link:-https://open.kattis.com/problems/grassseed
#include <bits/stdc++.h>
using namespace std;
int main()
{
     double C,sum=0;
     int L;
     cin>>C>>L;
     while(L--)
     {
          double w,l;
          cin>>w>>l;
          sum+=w*l*C; 
     }
     printf("%.7lf",sum);
     return 0;
}
