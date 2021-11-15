#include <bits/stdc++.h>
using namespace std;
int solve(int N)
{
     int count=0;
     while(N!=0)
     {
       if(N%10==4)
        count++;
       N = N/10;
     }
     return count;
}
int main()
{
     int T;
     cin >> T;
     while(T--)
     {
          int N;
          cin >> N;
          cout<<solve(N)<<endl;
     }
     return 0;
}
