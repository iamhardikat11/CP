//Link:-https://open.kattis.com/problems/fizzbuzz
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int X,Y,N;
     cin>>X>>Y>>N;
     for(int i=1;i<=N;i++)
     {
          if(i%X==0 && i%Y==0)
               cout<<"FizzBuzz"<<"\n";
          else if(i%Y==0)
               cout<<"Buzz"<<"\n";
          else if(i%X==0)
               cout<<"Fizz"<<"\n";
          else
               cout<<i<<"\n";
     }
     return 0;
}
