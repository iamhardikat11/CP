//Link:-https://open.kattis.com/problems/harshadnumbers
#include <bits/stdc++.h>
using namespace std;
int sumofNumbers(int N)
{
     if(N==0)
      return 0;
     return (N%10)+sumofNumbers(N/10);
}
int main()
{
     int N;
     cin>>N;
     while(1)
     {
       if(N==0) {
            cout<<1<<endl; 
            break;
       }
       if(N%sumofNumbers(N)==0) {
            cout << N << std::endl; 
            break;
            
       } 
       N++;
     }
     return 0;
}
