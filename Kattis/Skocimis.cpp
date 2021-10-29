//Link:-https://open.kattis.com/problems/skocimis
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     int count=0;
     while(!(b-a==1 && c-b==1))
     {
         if(b-a==1)
         {
          a=b;
          
         }
         count++; 
     }
     
}
