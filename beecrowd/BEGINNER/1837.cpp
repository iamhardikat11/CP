#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   cin >> a >> b;
   if(a%b>=0)
    printf("%d %d\n", a/b,a%b);
   else
    {
       if(a<0 && b>0)
        printf("%d %d\n", a/b-1,a%b+b);
       else
        printf("%d %d\n", a/b+1,a%b-b);
    }

   return 0;
}
