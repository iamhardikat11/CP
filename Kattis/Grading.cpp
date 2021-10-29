//Link:-https://open.kattis.com/problems/grading
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d,e;
     cin>>a>>b>>c>>d>>e;
     int marks;
     cin>>marks;
     if(marks>=a)
     {
          cout<<"A"<<endl;
          return 0;
     }
     else if(marks>=b)
     {
          cout<<"B"<<endl;
          return 0;
     }
     else if(marks>=c)
     {
          cout<<"C"<<endl;
          return 0;
     }
     else if(marks>=d)
     {
          cout<<"D"<<endl;
          return 0;
     }
     else if(marks>=e)
     {
          cout<<"E"<<endl;
          return 0;
     }
     else
      cout<<"F"<<endl;
     return 0;
}
