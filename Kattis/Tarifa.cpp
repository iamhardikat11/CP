#include <bits/stdc++.h>
using namespace std;
int main()
{
     int X,N;
     cin>>X>>N;
     int total=(N+1)*X;
     while(N--)
     {
        int P;
        cin>>P;
        total-=P;
     }
     cout<<total<<endl;
     return 0;
     
}
