//Link:-https://open.kattis.com/problems/sodaslurper
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int e,f,c;
     cin>>e>>f>>c;
     int sum=e+f;
     int drank=0;
     while(sum>=c)
     {
          sum=sum-c+1;
          drank++;
     }
     cout<<(drank);
     return 0;
}
     
